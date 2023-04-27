#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @m: number of times the character \ should be printed
 */
void print_diagonal(int m)
{
	if (m <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
