#include "main.h"

/**
 * _strcat - functions thatconcatenates two string
 * @dest: The char of a parameter of a function
 * @src:  The char of a parameter of a function
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')

	i++;

	j = 0;

	while (src[j] != '\0')

	{

	dest[i] = src[j];
	i++;
	j++;
	}

	dest[i] = '\0';

	return (dest);

}
