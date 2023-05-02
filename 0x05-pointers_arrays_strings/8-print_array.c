#include "main.h"

/**
 * print_array - this function is dedicated to print n elements of an array
 * @tab: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *tab, int n)
{
	int a;

	for (a = 0; a < (n - 1); a++)
	{
		printf("%d, ", tab[a]);
	}
		if (a == (n - 1))
		{
			printf("%d", tab[n - 1]);
		}
			printf("\n");
}

