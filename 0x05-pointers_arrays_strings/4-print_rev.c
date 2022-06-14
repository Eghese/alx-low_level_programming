#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: s is a string and a pointer of an argument
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
