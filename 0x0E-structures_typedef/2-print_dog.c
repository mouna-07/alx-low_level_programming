#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - returns a struct named dog
 * @s: the struct in question
 */
void print_dog(struct dog *s)
{
	if (s == NULL)
		return;

	if (s->name == NULL)
		s->name = "(nil)";
	if (s->owner == NULL)
		s->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", s->name, s->age, s->owner);
}

