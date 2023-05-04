#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @T: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *T, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = T[i];
		T[i] = T[n];
		T[n] = j;
	}
}
