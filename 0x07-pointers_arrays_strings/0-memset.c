#include "main.h"
/**
 * _memset - functions that fills memory with a constant byte.
 * @s: is a char variable
 * @b: is a char variable
 * @n: is an int variable
 * Return: a  pointer variable
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
