#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - affiche les elem dun tab
 * @tab: tableau
 * @elem: elements a afficher
 * @ap: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *tab, size_t elem, void (*ap)(int))
{
	unsigned int i;

	if (tab == NULL || ap == NULL)
		return;

	for (i = 0; i < elem; i++)
	{
		ap(tab[i]);
	}
}
