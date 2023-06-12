#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the created file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int Op, Wr, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}
	Op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	Wr = write(Op, text_content, l);
	if (Op == -1 || Wr == -1)
		return (-1);
	close(Op);
	return (1);
}
