#include "main.h"
/**
 * puts2 - functions that print strinig from the first character
 * @str: string of an argumet
 * return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	if (str[i] % 2)
	{
		_putchar(str[i]);
	}
}
