#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a user define data type
 * @name: A char datatype
 * @age: A float datatype
 * @Owner: A char datatype
 * Description: structure to store dog info
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
