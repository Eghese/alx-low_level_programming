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

	for (n = 0; dest[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	src[n] = '\0';
}
