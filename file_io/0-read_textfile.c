#include "main.h"
/**
 * read_textfile - Produces text from a file
 * @filename: Subject file
 * @letters: Amount of content to print
 * Return: NULL/open or write "x/z"
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *ptr;

	if (filename == NULL)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, ptr, letters);
	w = write(STDOUT_FILENO, ptr, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(ptr);
		return (o);
	}

	free(ptr);
	close(o);

	return (w);
}
