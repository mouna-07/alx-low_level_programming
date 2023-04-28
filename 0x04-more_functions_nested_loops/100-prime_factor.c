#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int N;
	long int MAX;
	long int i;

	N = 612852475143;
	MAX = -1;

	while (N % 2 == 0)
	{
		MAX = 2;
		N /= 2;
	}

	for (i = 3; i <= sqrt(N); i = i + 2)
	{
		while (N % i == 0)
		{
			MAX = i;
			N = N / i;
		}
	}

	if (N > 2)
		MAX = N;

	printf("%ld\n", MAX);

	return (0);
}
