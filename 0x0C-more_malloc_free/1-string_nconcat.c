#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatene un nb de bytes de str a un str
 * @s1: str destination
 * @s2: st source
 * @n: nombre de bytes concatenes
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a = 0, b = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		str = malloc(sizeof(char) * (l1 + n + 1));
	else
		str = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!str)
		return (NULL);

	while (a < l1)
	{
		str[a] = s1[a];
		a++;
	}

	while (n < l2 && a < (l1 + n))
		str[a++] = s2[b++];

	while (n >= l2 && a < (l1 + l2))
		str[a++] = s2[b++];

	str[a] = '\0';

	return (str);
}
