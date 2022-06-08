#include "main.h"
/**
 * int _islower - a function that checks for lower case.
 * @c: it is the integer parameter of the function
 * Return: 1 if success.
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
