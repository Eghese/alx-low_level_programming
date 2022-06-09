#include "main.h" 
/**
 * times_table - printing the time 9 times table starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b <= 9; b++)
		{
			d = (a * b);

			if ((d / 10) > 0)
			{
				_putchar(' ');
			}

			
			else if (cone < 9)
			{
				_putchar((d % 10) + '0');
			}
			else
				-putchar(' ')
}






