#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @shape: size of the triangle
 */
void print_triangle(int shape)
{
	if (shape <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i <= shape; i++)
		{
			for (j = i; j < shape; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
