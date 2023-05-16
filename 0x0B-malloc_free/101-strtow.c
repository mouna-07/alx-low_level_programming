#include <stdlib.h>
#include "main.h"

/**
 * count_word - helps the main function to count the nb of strings in a word
 * @str: string
 *
 * Return: number of words
 */
int count_word(char *str)
{
	int f, s, b;

	f = 0;
	b = 0;

	for (s = 0; str[s] != '\0'; s++)
	{
		if (str[s] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - split str to word
 * @str: splitted string
 *
 * Return: pointer to array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **tab, *t;
	int j, l = 0, length = 0, w, d = 0, go, finish;

	while (*(str + length))
		length++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	tab = (char **) malloc(sizeof(char *) * (w + 1));
	if (tab == NULL)
		return (NULL);

	for (j = 0; j <= length; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (d)
			{
				finish = j;
				t = (char *) malloc(sizeof(char) * (d + 1));
				if (t == NULL)
					return (NULL);
				while (go < finish)
					*t++ = str[go++];
				*t = '\0';
				tab[l] = t - d;
				l++;
				d = 0;
			}
		}
		else if (d++ == 0)
			go = j;
	}

	tab[l] = NULL;

	return (tab);
}
