#include "main.h"
/**
 * _strspn - Entry point
 * @a: input
 * @acpt: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *a, char *acpt)
{
	unsigned int n = 0;
	int r;

	while (*a)
	{
		for (r = 0; acpt[r]; r++)
		{
			if (*a == acpt[r])
			{
				n++;
				break;
			}
			else if (acpt[r + 1] == '\0')
				return (n);
		}
		a++;
	}
	return (n);
}
