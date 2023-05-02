#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by source
 * @destina: str copy to
 * @source: str copy from
 * Return: string
 */
char *_strcpy(char *destina, char *source)
{
	int a = 0;
	int b = 0;

	while (*(source + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		destina[b] = source[b];
	}
	destina[a] = '\0';
	return (destina);
}
