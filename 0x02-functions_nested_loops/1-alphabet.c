#include "main.h"
/**
 * Description: Print_alphabet - print alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabets(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
