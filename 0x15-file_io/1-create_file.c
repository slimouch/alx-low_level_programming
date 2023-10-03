#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 success or -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int OP, WR, L = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[L])
			L++;
	}
	OP = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	WR = write(OP, text_content, 1);
	if (OP == -1 || WR == -1)
		return (-1);
	close(OP);
	return (1);
}
