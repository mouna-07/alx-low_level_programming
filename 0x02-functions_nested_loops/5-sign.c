#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @m: the int to check
 * Return: 1 and prints + if m is greater than zero
 * 0 and prints 0 if m is zero
 * -1 and prints - if m is less than zero
 */
int print_sign(int m)
{
	if (m > 0)
	{
		_putchar('+');
		return (1);
	} else if (m == 0)
	{
		_putchar(48);
		return (0);
	} else if (m < 0)
	{
		_putchar('-');
	}
		return (-1);
}
