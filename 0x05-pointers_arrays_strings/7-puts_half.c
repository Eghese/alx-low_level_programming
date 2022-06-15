#include "main.h"
/**
 * puts_half - prints the half of a string
 *  @str: parameter of a string
 *  return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int k = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}
	k = i;

	while (j < k)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
