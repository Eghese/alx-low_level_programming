#include "main.h"
/**
 * _pow_recursion - functions that returns the value of x and y
 * @x: x is an integer parameter
 * @y: y is an integer parameter
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return( x * _pow_recursion(x, y - 1));
}
