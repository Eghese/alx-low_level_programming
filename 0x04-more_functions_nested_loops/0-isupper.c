#include "main.h"
/**
 * _isupper - functions to checks for uppercase character.
 * @c: parameter for the program
 * Return: 1 if success 0 if success
 */
int _isupper(int c)
{


	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
