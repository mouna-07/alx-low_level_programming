#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - returns a struct named dog
 * @strct: the struct in question
 */
void print_dog(struct dog *strct)
{
	if (strct == NULL)
		return;

	if (strct->name == NULL)
		strct->name = "(nil)";
	if (strct->owner == NULL)
		strct->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", strct->name, strct->age, strct->owner);
}

