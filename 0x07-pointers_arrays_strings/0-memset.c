#include "main.h"
/**
 *_memset - fill a block of memory with a specific value
 *@a: address of memory
 *@b: desired value
 *@nb: nb of bytes to be changed
 *
 *Return: changed array with new value for n bytes
 */
char *_memset(char *a, char b, unsigned int nb)
{
	int i = 0;

	for (; nb > 0; i++)
	{
		a[i] = b;
		nb--;
	}
	return (a);
}
