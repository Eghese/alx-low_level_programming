#include "main.h"
/**
 * _strchr - functions that locates the character of a string
 * @s: a char variable
 * @c: a char variable
 * Return: null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			s++;
		}

		if (*s == c)
		{
			return (s);
		}
	}
}
