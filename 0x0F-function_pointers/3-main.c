#include "3-calc.h"

/**
 * main - prefoms a simple opperation on 2 numbers
 * @argc: number of arugments passed to main
 * @argv: array of arguments passed to main
 * return: none
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char op;
	int (*ret)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = *(argv[2]);
	if (num2 == 0 && (op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	ret = get_op_func(argv[2]);
	if (ret == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n" , ret(num1, num2));
	return (0);
}
