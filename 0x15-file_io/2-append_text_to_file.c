#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to modify
 * @text_content: a null terminated string to put at the end of the file
 * Return: 1 on sucess, -1 on fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, check;
	size_t i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			check = write(fd, (text_content + i), 1);
			if (check == -1)
			return (-1);
		}
	}
	close(fd);
	return (1);
}
