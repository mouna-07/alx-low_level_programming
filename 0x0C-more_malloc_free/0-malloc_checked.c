#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - uses malloc to allocate a space of memory
 * @mem: the space allocated in bytes
 *
 * Return: a pointer to allocated space
 */
void *malloc_checked(unsigned int mem)
{
	void *p;

	p = malloc(mem);

	if (p == NULL)
		exit(98);

	return (p);
}
