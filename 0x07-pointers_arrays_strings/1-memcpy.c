#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@d: memory where is stored
 *@s: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *d, char *s, unsigned int n)
{
	int p = 0;
	int j = n;

	for (; p < j; p++)
	{
		d[p] = s[p];
		n--;
	}
	return (d);
}
