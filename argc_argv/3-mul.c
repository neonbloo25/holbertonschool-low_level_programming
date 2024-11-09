#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplication result of two ints
 * @argc: count
 * @argv: vector
 * Return: either zero or one
 */
int main(int argc, char *argv[])
{
	int m1, m2;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}

	m1 = atoi(argv[1]);
	m2 = atoi(argv[2]);

	printf("%d\n", m1 * m2);
	return (0);
}
