#include <stdio.h>
/**
 * Description: main - printing the output of an alphabet.
 *
 * Return: 0 if success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
