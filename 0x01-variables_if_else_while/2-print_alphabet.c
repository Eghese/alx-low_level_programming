#include <stdio.h>
/**
 * Description: main - printing the output of an alphabet.
 *
 * Return: 0 if success
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	return (0);
}
