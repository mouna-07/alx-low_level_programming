#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase followed by uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
