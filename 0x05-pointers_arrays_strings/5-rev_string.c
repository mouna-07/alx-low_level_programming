#include "main.h"

/**
* rev_string - is a function used in reversing a string
* @str: Input string
* Return: String in reverse
**/

void rev_string(char *str)
{
	char revi = str[0];
	int count = 0;
	int n;

	while (str[count] != '\0')
		count++;
	for (n = 0; n < count; n++)
	{
		count--;
		revi = str[n];
		str[n] = str[count];
		str[count] = revi;
	}
}
