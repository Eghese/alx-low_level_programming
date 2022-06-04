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
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	/* your code goes there */
	if (last_digit < 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	}
	if (last_digit > 0 &&  last_digit != 0)
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}
