#include "main.h"

/**
 * _pow_recursion - returns x power of y
 * @a: number
 * @b: exponentiel
 *
 * Return: a power b
 */
int _pow_recursion(int a, int b)
{
	if (a < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}
