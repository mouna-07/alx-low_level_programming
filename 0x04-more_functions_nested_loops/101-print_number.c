#include "main.h"

/**
 * print_number - prints an integer
 * @n1: integer to be printed
 */
void print_number(int n1)
{
	unsigned int n2;

	if (n1 < 0)
	{
		n2 = -n1;
		_putchar('-');
	} else
	{
		n2 = n1;
	}

	if (n2 / 10)
	{
		print_number(n2 / 10);
	}

	_putchar((n2 % 10) + '0');
}
