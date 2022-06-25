#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiply two numbers
 * @argv: argument value
 * @argc: argument count
 * Return: 0 if success, and 1 if there is error
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
