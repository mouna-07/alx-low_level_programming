#include "main.h"
/**
 * _puts_recursion - function that does the same thing as puts();
 * @str: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *str)
{
	if (*str)
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}

	else
		_putchar('\n');
}
