#include <stdio.h>
 /**
  * Description: main - printing output of a string.
  *
  * Return: 1 if success
  */

int main(void)
{
	int start = 1;
	int end = start + 58;
char msg[60] = " and that of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(msg, end, start, stderr);
	return (1);
}
