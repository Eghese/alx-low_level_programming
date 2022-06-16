#include "main.h"
#include <string.h>

/**
 * _strcat - functions thatconcatenates two string
 * @dest: The char of a parameter of a function
 * @src:  The char of a parameter of a function
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int var1, var2, i;

	while (dest[i] != '\0')
	{
		_putchar(dest[i]);
		i++;
	}
	while (src[i] != '\0')
	{
		_putchar(src[i]);
		i++;
	}

	for (i = 0; i <= var2; i++)
	{
		dest[var1 + i] = '\0';
	}
	_putchar('\n');

	return (dest);
}
