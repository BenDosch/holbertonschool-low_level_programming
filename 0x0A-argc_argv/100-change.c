#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks to see the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: change to check
 * Return: 1 if error, 0 if sucess
 */

int main(int argc, char *argv[])
{
	int change;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change <= 0)
		printf("0\n");
	while (change >= 25)
	{
		change -= 25;
		coins += 1;
	}
	while (change >= 10)
	{
		change -= 10;
		coins += 1;
	}
	while (change >= 5)
	{
		change -= 5;
		coins += 1;
	}
	while (change >= 2)
	{
		change -= 2;
		coins += 1;
	}
	while (change >= 1)
	{
		change -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
