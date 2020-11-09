#include "holberton.h"

/**
 * read_textfile - reads a text file and prints a number of leters to stdout
 * @filename: file to read
 * @letters: how many letters to print
 * Return: number of letters printed or 0 on fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, prt;
	char buff[letters + 1];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	prt = write(STDOUT_FILENO, buff, letters);
	if (prt == -1)
		return (0);
	close(fd);
	return (prt);
}
