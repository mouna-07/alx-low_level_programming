#include <stdio.h>
#include "main.h"

/**
 * main - prints the total of args recv
 * @argc: num of args
 * @argv: tab of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
