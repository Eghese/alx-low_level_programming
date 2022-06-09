#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - printing all natural numbers from (n to 98).
 * @n: number of parameter
 * Return: 0 if sucess
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
	       _putchar(',');
	       _putchar(n);

	}
	_putchar('\n');
}
