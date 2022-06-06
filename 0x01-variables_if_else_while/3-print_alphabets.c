#include <stdio.h>
/**
 * Description: main - the alphabet in lowercase and uppercase
 *
 * Return: 0 if success.
 */
int main(void)
{
	int ch;
	int ph;

	for (ch = 'a'; ch >= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ph = 'A'; ph >= 'Z'; ph++)
	{
		putchar(ph);
	}
	putchar('\n');

	return (0);
}
