#include "function_pointers.h"
/**
 * int_index - retourne index place si true sinon -1
 * @tab: tableau
 * @elm: taille des elements du tab
 * @p: pointeur sur la fonction
 * Return: 0
 */
int int_index(int *tab, int elm, int (*p)(int))
{
	int i;

	if (tab == NULL || elm <= 0 || p == NULL)
		return (-1);

	for (i = 0; i < elm; i++)
	{
		if (p(tab[i]))
			return (i);
	}
	return (-1);
}
