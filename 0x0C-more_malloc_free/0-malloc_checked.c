#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates a space of memory to a var
 * @b: allocatd space in bytes
 *
 * Return: a pointer to the allocated space
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
