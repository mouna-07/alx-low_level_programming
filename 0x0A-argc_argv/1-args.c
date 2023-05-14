#include <stdio.h>
#include "main.h"

/**
 * main - print num of args
 * @argc: numb of args
 * @argv: tab of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
