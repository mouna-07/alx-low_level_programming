#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @line: number of times the character _ should be printed
 */
void print_line(int line)
{
	if (line <= 0)
	{
		_putchar('\n');
	} else
	{
		int n;

		for (n = 1; n <= line; n++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
