#include "main.h"
/**
 * string_toupper - converting lower case to uppercase)
 * @s: a pointer of a char
 * Return: a pointer of char
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
