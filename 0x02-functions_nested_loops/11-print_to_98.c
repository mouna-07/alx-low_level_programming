#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from nb to 98,
 * followed by a new line
 * @nb: print from this number
 */
void print_to_98(int nb)
{
	int i, k;

	if (nb <= 98)
	{
		for (i = nb; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (nb >= 98)
	{
		for (k = nb; k >= 98; k--)
		{
			if (k != 98)
				printf("%d, ", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	}
}
