#include <stdio.h>
/**
 * Description: main - printing combination of single digits and a comma.
 *
 * Return: 0 if success
 */

int main(void)
{
	int a = 0;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
