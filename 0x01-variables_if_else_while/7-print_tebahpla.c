#include <stdio.h>
/**
 * Description: main - printing lower case in reverse
 * Return: 0 if sucess
 *
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d--)
	{

		putchar(d);
	}

	putchar('\n');

	return (0);

}
