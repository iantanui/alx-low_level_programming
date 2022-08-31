#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append to
 * @text_content: text to append to file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int result = 1, fd;

	if (filename == NULL)
		result = -1;

	fd = open(filename, O_WRONLY, 
	return (result);
}
