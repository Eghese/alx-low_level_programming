#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 * @name: a char type
 * @f: a pointer to a function
 * Return: sucess
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
