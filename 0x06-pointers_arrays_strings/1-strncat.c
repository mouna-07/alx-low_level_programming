#include "main.h"
/**
 * _strncat - concatenate two strings
 * using  n bytes from src
 * @destination: value
 * @source: value
 * @s: value
 *
 * Return: destination
 */
char *_strncat(char *destination, char *source, int s)
{
	int a;
	int b;

	a = 0;
	while (destination[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < s && source[b] != '\0')
	{
	destination[a] = source[b];
	a++;
	b++;
	}
	destination[a] = '\0';
	return (destination);
}

