#include "main.h"
/**
 * rev_string - reverse of a string
 * @s: s is a string in the parameter
 * return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
}
