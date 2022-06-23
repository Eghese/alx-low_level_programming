#include "main.h"
/**
 * _puts_recursion - functions that prints a strings with a line
 * @s: a pointer char
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
