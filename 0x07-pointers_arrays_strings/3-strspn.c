#include "main.h"
/**
 * _strspn - functions that gets the length of a prefix.
 * @s: a char variable
 * @accept: a char variable
 * Return: returns the pointers.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
