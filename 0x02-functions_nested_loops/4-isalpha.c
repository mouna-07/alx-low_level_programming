#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @m: the character to be checked
 * Return: 1 if m is a letter, 0 otherwise
 */
int _isalpha(int m)
{
	return ((m >= 'a' && m <= 'z') || (m >= 'A' && m <= 'Z'));
}
