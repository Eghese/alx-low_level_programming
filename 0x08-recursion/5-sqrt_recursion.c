#include "main.h"
/**
 * _sqrt_recursion- function that returns the natural square root of n
 * @n: integer parameter of a number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (_squareRoot(n, 1));
}
/**
 * _squareRoot - prototype
 * @n: Integer parameter
 * @i: Integer parameter
 * Return: square root
 */
int _squareRoot(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_squareRoot(n, i + 1));
}


