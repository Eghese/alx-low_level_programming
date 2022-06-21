#include "main.h"
/**
 * _memcpy - functions that copies a memory area.
 * @dest: a char pointer
 * @src: a char pointer
 * @n: an unsigned integer
 * Return: a pointer dest and src.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
