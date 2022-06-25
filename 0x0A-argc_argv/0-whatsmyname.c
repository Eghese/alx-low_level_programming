#include "main.h"
#include <stdio.h>
/**
 * main - writing a function that prints its name, followed by a new line.
 * @argv: argument value
 * @argc:  argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
