#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file name
 * @text_content: is a NULL terminated string to add at the end of the file
 * Return: 1 succes or -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int OP, WR, L = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[L])
			L++;
	}
	OP = open(filename, O_WRONLY | O_APPEND);
	WR = write(OP, text_content, L);
	if (OP == -1 || WR == -1)
		return (-1);
	close(OP);
	return (1);
}
