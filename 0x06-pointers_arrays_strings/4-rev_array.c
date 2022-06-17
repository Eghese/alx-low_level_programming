#include "main.h"
/**
 *  reverse_array - functions that reverses an array of integers
 *  @n: number of array
 *  @a: a variable parameter of a function
 *  Return: pointer
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			k = *(a + j);
			a[j] = a[j - 1];
			a[j - 1] = k;
		}
	}
}

