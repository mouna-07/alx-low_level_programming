#include "main.h"
/**
 * _puts - is a function that prints string,is followed by a new line to stdout
 * @chaine: is the string  that we are asked to print
 */
void _puts(char *chaine)
{
	while (*chaine != '\0')
	{
		_putchar(*chaine++);
	}
	_putchar('\n');
}
