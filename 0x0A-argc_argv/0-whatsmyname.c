#include <stdio.h>
#include "main.h"

/**
 * main - prints name's program
 * @argc: num of arguments
 * @argv: tab of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
