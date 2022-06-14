#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: s is a string and a pointer of an argument
 * Return: void
 */
void print_rev(char *s)
{
	int i = 1;
	int a = 0;
	int len = 0;
	int p = 0;


	while (s[len] != '\0')
	{
		_putchar(s[len]);
		i++;
	}
	p = len;
	while (i < len)
	{
		_putchar(s[len - 1]);
		len--;
	}
	if (p > 1)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
