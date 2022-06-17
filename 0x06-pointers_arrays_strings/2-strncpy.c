#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: A string of the parameter
 * @src: A string of the parameter
 * @n: An integer of the parameter
 * Return: A pointer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for(i = 0; dest[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}
	src[i] = '\0';
	return (src);
}
