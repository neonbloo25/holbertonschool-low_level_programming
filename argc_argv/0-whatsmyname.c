#include <stdio.h>
/**
 * main - prints filename
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc == 50)
		return (-1);

	printf("%s\n", argv[0]);

	return (0);
}
