#include "main.h"
/**
 * _print_rev_recursion - Prints reversed string.
 * @str: The string in question.
 */
void _print_rev_recursion(char *str)
{
	if (*str)
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
