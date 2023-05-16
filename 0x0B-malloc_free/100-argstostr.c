#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry
 * @C: input type int
 * @V: double pointer array
 * Return: 0
 */
char *argstostr(int C, char **V)
{
	int a, b, c = 0, d = 0;
	char *str;

	if (C == 0 || V == NULL)
		return (NULL);

	for (a = 0; a < C; a++)
	{
		for (b = 0; V[a][b]; b++)
			d++;
	}
	d += C;

	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < C; a++)
	{
	for (b = 0; V[a][b]; b++)
	{
		str[c] = V[a][b];
		c++;
	}
	if (str[c] == '\0')
	{
		str[c++] = '\n';
	}
	}
	return (str);
}
