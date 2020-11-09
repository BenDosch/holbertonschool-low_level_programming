#include "holberton.h"

/**
 * create_file - creates a file if it does not exits, trucates if it does.
 * @filename: file to read
 * @text_content: a null terminated string to put in file
 * Return: 1 on sucess, -1 on fail.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, check;
	size_t i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
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
