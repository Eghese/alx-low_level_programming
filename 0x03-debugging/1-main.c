#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
		/* no increment so it will loop infinitely */
	}

	printf("Infinite loop avoided! \\0/\n");

	return (0);
}
