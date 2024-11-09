#include <stdio.h>
/**
 * main - prints all arguments recieved
 * @argc: will be our target maximum
 * @argv: will be our subject array
 * Return: zero.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
