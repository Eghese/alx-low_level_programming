#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat -  write a function that concatenates two string
 * @s1: is a char
 * @s2: is a char
 * @n: is an integer
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count, count1;
	int sign = n;
	char *ptr;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (sign >= len2)
	{
		sign = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (count = 0; count < len1; count++)
	{
		ptr[count++] = s1[count1];
	}
	for (count1 = 0; count1 < sign; count++)
	{
		ptr[count++] = s2[count1];
	}
	ptr[count++] = '\0';
	return (ptr);
}

