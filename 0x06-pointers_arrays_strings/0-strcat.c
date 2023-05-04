#include "main.h"
/**
 * _strcat - concatenates two strings
 * @destination: value
 * @source: value
 *
 * Return: function void
 */
char *_strcat(char *destination, char *source)
{
	int a;
	int b;

	a = 0;
	while (destination[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (source[b] != '\0')
	{
		destination[a] = source[b];
		a++;
		b++;
	}

	destination[a] = '\0';
	return (destination);
}
