#include "main.h"
/**
 * create_file - makes and fills file
 * @filename: name of subject
 * @text_content: it's filling
 * Return: 1/-1
 */
int create_file(const char *filename, char *text_content)
{
	int len, x, i;

	len = 0, x = 0, i = 0;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (x == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	else
	{
		close(x);
		return (1);
	}

	i = write(x, text_content, len);
	if (i == -1 || i != len)
		return (-1);

	close(x);
	return (1);
}
