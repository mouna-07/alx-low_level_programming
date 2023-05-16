#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 *
 * @argc: num of args
 * @argv: tab of args
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int nb, k, res;
	int koyns[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nb = atoi(argv[1]);
	res = 0;

	if (nb < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && nb >= 0; k++)
	{
		while (nb >= koyns[k])
		{
			res++;
			nb -= koyns[k];
		}
	}

	printf("%d\n", res);
	return (0);
}
