#include "main.h"
/**
 * _strchr - functions that locates the character of a string
 * @s: a char variable
 * @c: a char variable
 * return: a pointer s or c or null
 */
char *_strchr(char *s, char c)
{
	char null[] = "NULL";
	char *nullguy = null;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			s++;
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (nullguy);
}
