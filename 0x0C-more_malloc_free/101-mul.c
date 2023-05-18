#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - verifies if a string contains a non-digit char
 * @str: evaluated string
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *str)
{
	int j = 0;

	while (str[j])
	{
		if (str[j] < '0' || str[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * _strlen - returns the length str
 * @str: evaluated string
 *
 * Return: the length
 */
int _strlen(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies positive number
 * @argc: num of args
 * @argv: tab of args
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int l1, l2, l, j, c, d1, d2, *res, A = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	l1 = _strlen(str1);
	l2 = _strlen(str2);
	l = l1 + l2 + 1;
	res = malloc(sizeof(int) * l);
	if (!res)
		return (1);
	for (j = 0; j <= l1 + l2; j++)
		res[j] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = str1[l1] - '0';
		c = 0;
		for (l2 = _strlen(str2) - 1; l2 >= 0; l--)
		{
			d2 = str2[l2] - '0';
			c += res[l1 + l2 + 1] + (d1 * d2);
			res[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[l1 + l2 + 1] += c;
	}
	for (j = 0; j < l - 1; j++)
	{
		if (res[j])
			A = 1;
		if (A)
			_putchar(res[j] + '0');
	}
	if (!A)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}

