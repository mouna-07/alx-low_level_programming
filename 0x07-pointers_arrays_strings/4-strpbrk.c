#include "main.h"
/**
 * _strpbrk - Entry point
 * @a: input
 * @acpt: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *a, char *acpt)
{
	int l;

	while (*a)
	{
		for (l = 0; acpt[l]; l++)
		{
		if (*a == acpt[l])
		return (a);
		}
	a++;
	}

return ('\0');
}
