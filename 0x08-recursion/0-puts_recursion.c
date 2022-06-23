#include "main.h"
/**
 * _puts_recursion - functions that prints a strings with a line
 * @s: a pointer char
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
