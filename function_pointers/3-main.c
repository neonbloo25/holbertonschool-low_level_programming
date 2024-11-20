#include "3-calc.h"
/**
 * main - calculates the result of two ints
 * @argc: argument count
 * @argv: argument vector
 * Return: result(good) NULL, exit 98,99 or 100(bad)
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
