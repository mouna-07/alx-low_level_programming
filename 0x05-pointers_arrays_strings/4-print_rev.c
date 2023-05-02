#include "main.h"
/**
 * print_rev - imprime en reversa
 * @str: the string to print
 * return: 0
 */
void print_rev(char *str)
{
	int longueur = 0;
	int p;

	while (*str != '\0')
	{
		longueur++;
		str++;
	}
	str--;
	for (p = longueur; p > 0; p--)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}
