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
	printf("Last digit of %d is %d ", n % 10);

	if (n % 10 < 5)
	{
		printf("and is greater than 5\n",);
	}
	if (n%10 == 0)
	{
		printf("and is 0\n", n, last_digit);
	}
	if (n%10 > 6 &&  n%10 != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
