#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - functions that print number
 * @separator: a char poin§§ter
 * @n: a const of an unsigned int
 * Return: success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(va);
	printf("\n");
}
