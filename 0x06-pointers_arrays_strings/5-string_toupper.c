#include "main.h"
/**
 * string_toupper - switch from lowercase to uppercase
 * @o: pointeur
 *
 * Return: o
 */
char *string_toupper(char *o)
{
	int i;

	i = 0;
	while (o[i] != '\0')
	{
		if (o[i] >= 'a' && o[i] <= 'z')
			o[i] = o[i] - 32;
		i++;
	}
	return (o);
}
