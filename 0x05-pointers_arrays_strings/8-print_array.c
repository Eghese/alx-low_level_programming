#include "main.h"
#include <stdio.h>
/**
 * print_array - printing n element of an array of integers
 * @a: an integer  of a parameter
 * @n: an integer of a parameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
