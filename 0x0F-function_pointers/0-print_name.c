#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 * @name: a char type
 * @f: a pointer type
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
