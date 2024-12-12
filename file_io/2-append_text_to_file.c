#include "main.h"
/**
 * append_text_to_file - adds content to existing content on file
 * @filename: lable for file
 * @text_content: its filling
 * Return: 1/-1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, w, o;

	len = 0, w = 0, o = 0;

	if (filename != NULL)
		o = open(filename, O_WRONLY | O_APPEND);
	else
		return (-1);

	if (o == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	else
		return (1);

	w = write(o, text_content, len);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
