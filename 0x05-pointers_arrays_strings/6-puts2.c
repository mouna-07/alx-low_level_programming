#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longueur = 0;
	int l = 0;
	char *a = str;
	int p;

	while (*a != '\0')
	{
		a++;
		longueur++;
	}
	l = longueur - 1;
	for (p = 0 ; p <= l ; p++)
	{
	if (p % 2 == 0)
	{
		_putchar(str[p]);
	}
	}
	_putchar('\n');
}
