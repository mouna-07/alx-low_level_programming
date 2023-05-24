#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - pointer to function
 * @nom: 
 * @p: pointeur sur la fonction
 * Return: nothing
 **/
void print_name(char *nom, void (*p)(char *))
{
	if (nom == NULL || p == NULL)
		return;

	p(nom);
}
