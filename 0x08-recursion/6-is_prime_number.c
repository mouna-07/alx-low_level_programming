#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - verifies if A is prime
 * @A: number
 *
 * Return: 1 if A is a prime number, 0 if not
 */
int is_prime_number(int A)
{
	if (A <= 1)
		return (0);
	return (actual_prime(A, A - 1));
}

/**
 * actual_prime - helps to identify if A is a prime
 * @A: number in question
 * @b: iterator
 *
 * Return: 1 if A is prime, 0 if not
 */
int actual_prime(int A, int b)
{
	if (b == 1)
		return (1);
	if (A % b == 0 && b > 0)
		return (0);
	return (actual_prime(A, b - 1));
}
