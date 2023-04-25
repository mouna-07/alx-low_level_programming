#include "main.h"

/**
 * print_times_table - prints the o times table, starting with 0
 * @o: number of the times table
 */
void print_times_table(int o)
{
	int m, n, l;

	if (o >= 0 && o <= 15)
	{
		for (m = 0; m <= o; m++)
		{
			for (n = 0; n <= o; n++)
			{
				l = n * m;
				if (n == 0)
				{
					_putchar(l + '0');
				} else if (l < 10 && n != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(l + '0');
				} else if (l >= 10 && l < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
				} else if (l >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((l / 100) + '0');
					_putchar(((l / 10) % 10) + '0');
					_putchar((l % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
