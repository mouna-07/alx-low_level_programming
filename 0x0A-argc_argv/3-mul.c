#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts strings to integers
 * @str: string
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
 * main - multiplies a number and another number
 * @argc: nb of args
 * @argv: tab of args
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}
