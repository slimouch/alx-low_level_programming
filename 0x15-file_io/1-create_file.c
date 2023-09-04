#inclide "main.h"
/**
 * create_file - creates a file.
 * @filename: the file name
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 Success or -1 failure.
 */
int create_file(const char *filename, char *text_content)
{
	int p, w, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}
	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(p, text_content, l);
	if (p == -1 || w == -1)
		return (-1);
	close(p);
	return (1);
}
