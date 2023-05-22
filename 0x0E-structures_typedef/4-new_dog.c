#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns strings length
 * @str: the string in question
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	int j;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * *_strcpy - copie str pointe par debut
 * en incluant le byte nul
 * vers le buffer pointe par fin
 * @fin: pointeur vers le buffer
 * @debut: str a copier
 *
 * Return: pointeur vers fin
 */
char *_strcpy(char *fin, char *debut)
{
	int length, j;

	length = 0;

	while (debut[length] != '\0')
	{
		length++;
	}

	for (j = 0; j < length; j++)
	{
		fin[j] = debut[j];
	}
	fin[j] = '\0';

	return (fin);
}

/**
 * new_dog - cree un chien
 * @name: nom du chien
 * @age: aage du chien
 * @owner: proprietaire du chien
 *
 * Return: pointer to dog (Success)ou NULL (fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
