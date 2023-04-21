#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, excepting q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
			putchar(alphabets);
	}

	putchar('\n');

	return (0);
}
