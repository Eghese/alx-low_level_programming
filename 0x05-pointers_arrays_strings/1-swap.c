#include "main.h"
/**
 * swap_int - swaps the values of two integer
 * @a - a pointer parameter
 * @b - b is a pointer parameter
 * Return - 0 if success.
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *b;
}
