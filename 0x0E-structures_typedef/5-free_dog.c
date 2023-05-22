#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libere la memoire pour struct
 * @s: free struct
 */
void free_dog(dog_t *s)
{
	if (s)
	{
		free(s->name);
		free(s->owner);
		free(s);
	}
}
