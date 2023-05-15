#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size
 * @siz: size array
 * @ch: char
 * Description: creates an array of size  & assign c
 * Return: pointer, NULL if fail
 *
 **/
char *create_array(unsigned int siz, char ch)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * siz);

	if (siz == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < siz; a++)
		str[a] = ch;
	return (str);
}
