#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - functions that prints a string
 * @separator: a pointer of char type
 * @n: an unsigned int
 * Return: success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *dest;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		dest = va_arg(arg, char*);
		if (dest)
		{
			printf("%s", dest);
		}
		else
			printf("(nil)");
		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
