#include "main.h"
/**
 * _strncpy - copy string
 * @destination: value
 * @source: value
 * @s: value
 *
 * Return: destination
 */
char *_strncpy(char *destination, char *source, int s)
{
	int a;

	a = 0;
	while (a < s && source[a] != '\0')
	{
		destination[a] = source[a];
		a++;
	}
	while (a < s)
	{
		destination[a] = '\0';
		a++;
	}

	return (destination);
}
