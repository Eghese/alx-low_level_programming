#include "main.h"
/**
*  _strncat - the concatenates of two string
*  @dest: a string of a parameter
*  @src: A string of a parameter
*  @n: an integer of a parameter
*  Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;

i = 0;
while (dest[i] != '\0')
{
i++;
}
n = 0;
while (src[n] != '\0')
{
dest[i] = src[n];
i++;
n++;
}
dest[i] = '\0';
return (dest);
}




