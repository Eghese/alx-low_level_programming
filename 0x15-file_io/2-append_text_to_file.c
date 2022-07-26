#include "main.h"
/**
* create_file - function that creates file
* @filename: pointer to filename to be created of char const type
* @append_text_to_file: string to be written into file
* Return: always successfull
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, length;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_WRONLY | O_APPEND);
	if (fdopen == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	length = 0;
	while (text_content[length] != '\0')
	{
		length++;
	}
	fdwrite = write(fdopen, text_content, length);
	if (fdwrite == -1)
		return (-1);
	close(fdopen);
	return (1);
}
