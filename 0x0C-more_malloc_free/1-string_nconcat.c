#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatene un nb de bytes de str a un str
 * @str1: str destination
 * @str2: st source
 * @nb: nombre de bytes concatenes
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *str1, char *str2, unsigned int nb)
{
	char *str;
	unsigned int a = 0, b = 0, l1 = 0, l2 = 0;

	while (str1 && str1[l1])
		l1++;
	while (str2 && str2[l2])
		l2++;

	if (nb < l2)
		str = malloc(sizeof(char) * (l1 + nb + 1));
	else
		str = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!str)
		return (NULL);

	while (a < l1)
	{
		str[a] = str1[a];
		a++;
	}

	while (nb < l2 && a < (l1 + nb))
		str[a++] = str2[b++];

	while (nb >= l2 && a < (l1 + l2))
		str[a++] = str2[b++];

	str[a] = '\0';

	return (str);
}
