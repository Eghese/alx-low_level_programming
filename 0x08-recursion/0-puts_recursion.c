#include "main.h"
/**
 * _puts_recursion - functions that prints a strings with a line
 * @s: a pointer char
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		return;
	}
	_putchar('\n');
	_puts_recursion(s + 1);
}
