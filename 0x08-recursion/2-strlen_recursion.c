#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: a char variable
 * Return: 1 and 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		_strlen_recursion(s + 1);
		return (1);
	}
}
