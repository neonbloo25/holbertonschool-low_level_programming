#include <stdio.h>
#include <string.h>
/**
 * main - displays argument count
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc + 1);

	if (argv[0] == NULL || *argv[0] == '\0')
		return (-1);
	return (0);
}
