#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen-functions that creates a new dog
 * @s: a char pointer
 * Return: a
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}
/**
 *  _strcpy - functions that copy a string
 *  @dest: pointer to a destination of string to be copied
 *  @src: pointer to source
 *  Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 *  new_dog - functions to create new dog
 *  @name: char type
 *  @age: float type
 *  @owner: char type
 *  Return: Always success
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	newd = malloc(sizeof(struct dog));
	if (newd == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(newd);
		return (NULL);
	}
	newd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newd->name == NULL)
	return (NULL);
	_strcpy(newd->name, name);

	newd->age = age;

	if (owner == NULL)
	{
		free(newd->owner);
		free(newd);
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newd->owner == NULL)
		return (NULL);
	_strcpy(newd->owner, owner);

	return (newd);
}
