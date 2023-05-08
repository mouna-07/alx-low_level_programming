#include "main.h"
/**
 * _strchr - Entry point
 * @a: input
 * @b: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *a, char b)
{
	int n = 0;

	for (; a[n] >= '\0'; n++)
	{
		if (a[n] == b)
			return (&a[n]);
	}
	return (0);
}
