#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: a char variable
 * Return: i
 */
int _strlen_recursion(char *s)
{
	int i;

	if (s[i] != '\0')
	{
		_strlen_recursion(s + 1);
		return (i);
	}
}
