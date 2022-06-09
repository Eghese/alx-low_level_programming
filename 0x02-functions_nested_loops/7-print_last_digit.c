#include "main.h"
/**
 * print_last_digit - printing the last digit of a number
 * @a: parameter of a number
 * @b: parameter of a number.
 * Return: 0 if success
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;

	_putchar(b);
	return (b);
}

