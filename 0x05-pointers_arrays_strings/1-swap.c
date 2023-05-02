#include "main.h"
/**
 * swap_int - is a function that swaps the values of two different integers
 * @c: first integer to swap
 * @b: second integer to swap
 */
void swap_int(int *c, int *b)
{
	int n;

	n = *c;
	*c = *b;
	*b = n;
}
