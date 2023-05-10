#include "main.h"

/**
 * factorial - retourne la factorielle d'un nombre
 * @i: nombre avec lequel on calcule la factor
 *
 * Return: factorielle de i
 */
int factorial(int i)
{
	if (i < 0)
		return (-1);
	if (i == 0)
		return (1);
	return (i * factorial(i - 1));
}
