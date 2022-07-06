#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *  free_dog - functions that free dogs
 *  @d: a pointer to dog
 *  Return: dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d);
	free(d->owner);
}
