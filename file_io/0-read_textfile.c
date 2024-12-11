#include "main.h"
/**
 * read_textfile - Produces text from a file
 * @filename: Subject file
 * @letters: Amount of content to print
 * Return: NULL/open or write "x/z"
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *ptr;

	if (filename == NULL)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, ptr, letters);
	z = write(STDOUT_FILENO, ptr, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(ptr);
		return (x);
	}

	free(ptr);
	close(x);

	return (z);
}
