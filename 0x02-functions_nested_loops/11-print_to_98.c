#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - printing all natural numbers from (n to 98).
 * @n: number of parameter
 * Return: 0 if sucess
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while  (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
