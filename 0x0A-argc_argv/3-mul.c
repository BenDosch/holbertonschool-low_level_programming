#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prings the value of argc
 * @argc: number of arguments passed to program
 * @argv: arguments passed to program
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc !=  3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
	printf("%d\n", sum);
	return (0);
}
