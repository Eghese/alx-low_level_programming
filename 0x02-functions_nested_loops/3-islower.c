#include "main.h"
/**
 * _islower - a function that checks for lower case.
 * @c: it is the integer parameter of the function
 * Return: 0 if success.
 */
int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
