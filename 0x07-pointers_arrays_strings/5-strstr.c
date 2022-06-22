#include "main.h"
/**
 * _strstr - functions that locates a substring.
 * @haystack: a char variable
 * @needle: a char variable
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *ans = haystack, *ans2 = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
				break;
		}
		if (!*needle)
		{
			return (ans);
		}
		needle = ans2;
		ans++;
		haystack = ans;
	}
	return (0);
}
