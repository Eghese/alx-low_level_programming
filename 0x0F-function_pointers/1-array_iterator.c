#include <stdio.h>
#include "funtion_pointers.h"
/**
 * array_iterator - functions that loops through an arry
 * @array: a pointer with int type
 * @action: a function pointer of int
 * @size: type of size_t
 * Return: sucess
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	if (i <= 0)
		return;
	if (array == NULL)
		return;
	for (count = 0; count < i; count++)
	{
		action(array[count]);
	}
}
