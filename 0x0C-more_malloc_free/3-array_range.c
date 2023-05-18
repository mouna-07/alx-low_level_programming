#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creer un tableau de nombres entiers
 * @min: le minimum a stocker dans le tableau
 * @max: le maximum a stocker dans le tableau et nb d'elemnts
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p;
	int j, sz;

	if (min > max)
		return (NULL);

	sz = max - min + 1;

	p = malloc(sizeof(int) * sz);

	if (p == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		p[j] = min++;

	return (p);
}
