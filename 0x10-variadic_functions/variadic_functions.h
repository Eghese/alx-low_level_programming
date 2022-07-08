#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
/**
 * struct pter- pointer for printing
 * @test: Pointer to input for test
 * @printer: pointer to function
 */
typedef struct pter
{
	char *test;
	void (*printer)();
}pt;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
