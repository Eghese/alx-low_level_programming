#ifndef DOG.H
#define DOG.H

/**
 * struct dog - a user define data type
 * @name: A char datatype
 * @age: A float datatype
 * Owner: A char datatype
 * Return: 0 if sucess.
 */
typedef struct dog
{
	char * name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
