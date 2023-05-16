#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts  str to int
 * @str:string
 *
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
	int j, e, o, length, g, dg;

	j = 0;
	e = 0;
	o = 0;
	length = 0;
	g = 0;
	dg = 0;

	while (str[length] != '\0')
		length++;

	while (j < length && g == 0)
	{
		if (str[j] == '-')
			++e;

		if (str[j] >= '0' && str[j] <= '9')
		{
			dg = str[j] - '0';
			if (e % 2)
				dg = -dg;
			o = o * 10 + dg;
			g = 1;
			if (str[j + 1] < '0' || str[j + 1] > '9')
				break;
			g = 0;
		}
		j++;
	}

	if (g == 0)
		return (0);

	return (o);
}

/**
 * main - sum of two positive nums
 * @argc: num of args
 * @argv: tab of args
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int S, nb, j, k, l;

	S = 0;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (argv[j][k] > '9' || argv[j][k] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (l = 1; l < argc; l++)
	{
		nb = _atoi(argv[l]);
		if (nb >= 0)
		{
			S += nb;
		}
	}

	printf("%d\n", S);
	return (0);
}
