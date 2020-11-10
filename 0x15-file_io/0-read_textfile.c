#include "holberton.h"

/**
 * read_textfile - reads a text file and prints a number of leters to stdout
 * @filename: file to read
 * @letters: how many letters to print
 * Return: number of letters printed or 0 on fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, check;
	ssize_t rd = 0;
	char *buf = malloc(sizeof(char) * letters);


	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	if (!buf)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	check = write(STDOUT_FILENO, buf, rd);
	if (check == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (rd);
}
