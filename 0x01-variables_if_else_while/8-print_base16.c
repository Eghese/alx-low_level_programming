#include <stdio.h>
/**
 * Description: main - printing out the number in base 16 in lowercase.
 *
 * Return: 0 if success.
 */

int main(void)
{
	int d;
	char e;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}

	for (e = 'a'; e <= 'f'; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
