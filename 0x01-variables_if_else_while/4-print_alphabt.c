#include <stdio.h>
/**
 * Description: main - output of an alphabet in lowercase except q and e
 *
 * Return: 0 if success
 */
int main(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		       putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
