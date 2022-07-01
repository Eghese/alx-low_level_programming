#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocates memory to array
* @nmemb: number of element
* @size: integer
* Return: pointer of array.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int arr;
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	arr = 0;
	while (arr < nmemb * size)
	{
		pt[arr] = 0;
		arr++;
	}
	return (pt);
}
