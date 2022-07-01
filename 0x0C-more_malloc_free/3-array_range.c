#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc.
* @b: integer parameter
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *val;

	val = malloc(b);
	if (val == NULL)
		exit(98);
else
	return (val);
}
