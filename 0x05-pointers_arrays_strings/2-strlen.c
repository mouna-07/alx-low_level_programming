#include "main.h"
/**
 * _strlen - is a function that returns the length of a random string
 * @a: is the string
 * Return: len of @a
 */
int _strlen(char *a)
{
	int longueur = 0;

	while (*a != '\0')
	{
		longueur++;
		a++;
	}

	return (longueur);
}
