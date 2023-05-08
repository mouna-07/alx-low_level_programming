#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @input: input
 * @s: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *input, int s)
{
	int S1, S2, y;

	S1 = 0;
	S2 = 0;

	for (y = 0; y < s; y++)
	{
		S1 = S1 + input[y * s + y];
	}

	for (y = s - 1; y >= 0; y--)
	{
		S2 += input[y * s + (s - y - 1)];
	}

	printf("%d, %d\n", S1, S2);
}
