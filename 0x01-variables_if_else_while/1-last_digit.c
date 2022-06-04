#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description: main - printing the ladst digit of a number stored.
 *
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	if (n > 0 && n != 0)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
