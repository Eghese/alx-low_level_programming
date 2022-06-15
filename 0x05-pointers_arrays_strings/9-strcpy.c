#include "main.h"
#include <stdio.h>
/**
 * _strcpy - functions that copies the string pointed to by src
 * @dest: destination pointer parameter
 * @str: source pointer parameter
 * return: pointer to destinatio to destination
 */
char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p] != '\0'; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';
	return (dest);
}
