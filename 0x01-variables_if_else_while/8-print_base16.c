#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int hex;
	char let;

	for (hex = 0; hex < 10; hex++)
		putchar((hex % 10) + '0');

	for (let = 'a'; let <= 'f'; let++)
		putchar(let);

	putchar('\n');

	return (0);
}
