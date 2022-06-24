#include "main.h"
/**
 * factorial - functions that returns the factorials of a given number
 * @n: the integer of the parameter
 * Return: 0 if lower and -1 if there is an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (n * factorial(n - 1));
	}
}
