#include "main.h"
/**
 * _isdigit - functions that check for a digit
 * @c: c is a parameter of the function
 * Return: 0 if failure and 1 if success
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{	
		return (0);
	}
}
