#include "main.h"

/**
 * print_most_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		if (m != 50)
		{
			if (m != 52)
			{
				_putchar(m);
			}
		}
	}
	_putchar('\n');
}

