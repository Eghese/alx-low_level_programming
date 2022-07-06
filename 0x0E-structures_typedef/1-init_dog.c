#include <stdio.h>
#include "dog.h"

/**
 * init_dog - functions that initialize the variable of type
 * @d: pointer of dog
 * @name: a pointer
 * @age: a char type
 * @owner: char type
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		return;
	}
}
