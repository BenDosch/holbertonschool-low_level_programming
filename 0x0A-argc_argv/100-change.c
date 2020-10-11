#include "holberton.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int change = atoi(argv[1]);
	int coins = 0;

/*check for write number of arguments*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (change <= 0)
		print("0\n");
	else
/*check coins*/
	{
		while(change >= 25)
		{
			change -= 25;
			coins += 1;
		}
		while(change >= 10)
		{
			change -= 10;
			coins += 1;
		}
		while(change >= 5)
		{
			change -= 5;
			coints += 1;
		}
		while(change >= 2)
		{
			change -= 2;
			coins += 1;
		}
		while(change >= 1)
		{
			change -= 1;
			coints += 1;
		}
		printf("%d\n", coins);
	}
	return (0)
}
