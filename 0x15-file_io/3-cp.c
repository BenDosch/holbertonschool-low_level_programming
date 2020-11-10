#include "holberton.h"

/**
 * main - coppies from one file to another
 * @argc: number of arguments, must be 3 for function to work
 * @argv: array of arguments passed to function
 * Return: 0 on sucess
 */

int main(int argc, const char *argv[])
{
	int fd1, fd2;
	const char *file_from = argv[1], *file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 00664);
	if (fd1 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
	}
	if (fd2 == -1 || copy(fd1, fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}


/**
 * copy - copies from file descriptor to another file descriptor
 * @fd1: file descriptor to copy from
 * @fd2: file descritpro to copy to
 * Return: 0 on sucess, -1 on fail.
 */

int copy(int fd1, int fd2)
{
	size_t bsize = 1024;
	int shift = 1;
	char *buf = malloc(sizeof(char) * bsize);

	while (shift > 0)
	{

		shift = read(fd1, buf, bsize);
		if (shift > 0)
			write(fd2, buf, shift);
		else if (shift == -1)
			return (-1);
	}
	return (0);
}
