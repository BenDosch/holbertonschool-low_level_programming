#include "holberton.h"
#include <stdio.h>

/**
 * main - program that prings the value of argc
 * @argc: number of arguments passed to program
 * @argv: arguments passed to program
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
