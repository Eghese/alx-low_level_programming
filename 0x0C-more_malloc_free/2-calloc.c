#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*  _realloc - reallocate memory size function
*  @ptr: pointer to address of old memory location
*  @old_size: unsigned int
*  @new_size: unsigned int 
*  @nmemb: unsigned integer
*  @size: unsigned integer
*  Return: return pointer to array
*/
void *_realloc(void *ptr,unsigned int nmemb, unsigned int size,int old_size,unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
