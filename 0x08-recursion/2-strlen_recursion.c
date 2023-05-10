#include "main.h"
/**
 * _strlen_recursion - Returns string's length.
 * @str: the string.
 *
 * Return: length.
 */
int _strlen_recursion(char *str)
{
	int L  = 0;

	if (*str)
	{
		L++;
		L += _strlen_recursion(str + 1);
	}

	return (L);
}
