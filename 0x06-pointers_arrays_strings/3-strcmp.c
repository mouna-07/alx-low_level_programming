#include "main.h"
/**
 * _strcmp - compare two string values
 * @A: input value
 * @B: input value
 *
 * Return: A[x] - B[x]
 */
int _strcmp(char *A, char *B)
{
	int x;

	x = 0;
	while (A[x] != '\0' && B[x] != '\0')
	{
		if (A[x] != B[x])
		{
			return (A[x] - B[x]);
		}
	x++;
	}
	return (0);
}
