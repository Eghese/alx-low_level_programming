#include <stdio.h>
/**
 * Description: main - the alphabet in lowercase and uppercase
 *
 * Return: 0 if success.
 */
int main(void)
{
	char d, e;

	for (d = 'a'; e >= 'z'; d++)
	{
		putchar(d);
	}
	for (e = 'A'; e >= 'Z'; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
