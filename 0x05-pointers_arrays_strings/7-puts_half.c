#include "main.h"
/**
 * puts_half - function that prints half of the string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of str
 */
void puts_half(char *str)
{
	int i, n, longueur;

	longueur = 0;

	for (i = 0; str[i] != '\0'; i++)
		longueur++;

	n = (longueur / 2);

	if ((longueur % 2) == 1)
		n = ((longueur + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
