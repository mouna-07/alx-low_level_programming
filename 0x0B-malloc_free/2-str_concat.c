#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatene A et B
 * @A: input one to concat
 * @B: input two to concat
 * Return: concat of A and B
 */
char *str_concat(char *A, char *B)
{
	char *concate;
	int a, b;

	if (A == NULL)
		A = "";
	if (B == NULL)
		B = "";

	a = b = 0;
	while (A[a] != '\0')
		a++;
	while (B[b] != '\0')
		b++;
	concate = malloc(sizeof(char) * (a + b + 1));

	if (concate == NULL)
		return (NULL);
	a = b = 0;
	while (A[a] != '\0')
	{
		concate[a] = A[a];
		a++;
	}

	while (B[b] != '\0')
	{
		concate[a] = B[b];
		a++, b++;
	}
	concate[a] = '\0';
	return (concate);
}
