#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialise une variable de type struct dog
 * @ptr: pointeur sur la structure dog
 * @name: nom du chien
 * @age: age du chien
 * @owner: proprietaire du chien
 */
void init_dog(struct dog *ptr, char *name, float age, char *owner)
{
	if (ptr == NULL)
		ptr = malloc(sizeof(struct dog));
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
