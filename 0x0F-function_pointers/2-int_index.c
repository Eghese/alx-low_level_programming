#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - functions that searches for an integer.
 * @size: a number of elements in the array
 * @cmp:is a pointer to the functions to be compare value.
 * @array: a pointer
 * Return: return index index number of comp int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

