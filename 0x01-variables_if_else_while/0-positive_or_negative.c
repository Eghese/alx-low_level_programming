#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** Discription: main - print a random number whether positive or negative
 *
 * return: 0 if successs
 **/
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */


	if (n > 0)
	{
		printf("%d is postivie\n", n);
	}
	else if  (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
