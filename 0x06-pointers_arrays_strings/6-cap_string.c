#include "main.h"
/**
 * cap_string - functions that capitalizes all words.
 * @s: a parameter of char
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
		i++;
	}
	return (s);
}
