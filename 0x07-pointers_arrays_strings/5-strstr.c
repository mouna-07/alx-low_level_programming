#include "main.h"
/**
 * _strstr - Entry point
 * @h: input
 * @n: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *h, char *n)
{
	for (; *h != '\0'; h++)
	{
		char *a = h;
		char *b = n;

		while (*a == *b && *a != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (h);
	}

	return (0);
}
