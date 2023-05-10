#include "main.h"

int check_pal(char *a, int b, int l);
int _strlen_recursion(char *a);

/**
 * is_palindrome - verify if the string is palindrome
 * @a: str
 *
 * Return: 1 if it is, 0 it is not
 */
int is_palindrome(char *a)
{
	if (*a == 0)
		return (1);
	return (check_pal(a, 0, _strlen_recursion(a)));
}

/**
 * _strlen_recursion - gives the len of strings
 * @a: str with length
 *
 * Return: length 
 */
int _strlen_recursion(char *a)
{
	if (*a == '\0')
		return (0);
	return (1 + _strlen_recursion(a + 1));
}

/**
 * check_pal - verify the characters of palindrome
 * @a: str
 * @b: iteration
 * @l: length
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *a, int b, int l)
{
	if (*(a + b) != *(a + l - 1))
		return (0);
	if (b >= l)
		return (1);
	return (check_pal(a, b + 1, l - 1));
}
