#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file name
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return:m1 success or -1 failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, w, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}
	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, l);
	if (p == -1 || w == -1)
		return (-1);
	close(p);
	return (1);
}
