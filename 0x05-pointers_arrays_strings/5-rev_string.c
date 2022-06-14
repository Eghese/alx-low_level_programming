#include "main.h"
/**
 * rev_string - reverse of a string
 * @s: s is a string in the parameter
 * return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int len = 0;
	int p = 0;

	while (s[i] != '\0')
	{
		len++;
	}
	p = len;
	while (i < len)
	{
		_putchar(s[len - 1]);
		len--;
	}
	if (p > 1)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
