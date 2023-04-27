#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int A;

	for (A = 1; A <= 100; A++)
	{
		if (A % 3 == 0 && A % 5 != 0)
		{
			printf(" Fizz");
		} else if (A % 5 == 0 && A % 3 != 0)
		{
			printf(" Buzz");
		} else if (A % 3 == 0 && A % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (A == 1)
		{
			printf("%d", A);
		} else
		{
			printf(" %d", A);
		}
	}
	printf("\n");

	return (0);
}
