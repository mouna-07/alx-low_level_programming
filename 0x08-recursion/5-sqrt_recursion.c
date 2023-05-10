#include "main.h"

int actual_sqrt_recursion(int a, int b);

/**
 * _sqrt_recursion - returns the square of a number
 * @a: number we want to calculate square
 *
 * Return: square of a
 */
int _sqrt_recursion(int a)
{
	if (a < 0)
		return (-1);
	return (actual_sqrt_recursion(a, 0));
}

/**
 * actual_sqrt_recursion - returns the square of a number
 * @a: number we want to calculate square
 * @b: iterateur
 *
 * Return: square of a
 */
int actual_sqrt_recursion(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (actual_sqrt_recursion(a, b + 1));
}
