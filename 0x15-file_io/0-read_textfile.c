#include "main.h"
/**
 * read_textfile - reads a text file and prints it to th POSIX stdout.
 * @filename: the file name
 * @letters: the numbers of letterws it could read and print
 * Return: the actual number of letters it could read and print,
 * 0 if the file cannot be opened or read, or the filename is NULL,
 * or write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bff;
	ssize_t w, r, f;

	if (filename == NULL)
		return (0);
	bff = malloc(sizeof(char) * letters);
	if (bff == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	r = read(f, bff, letters);
	w = write(STDOUT_FILENO, bff, r);
	if (f == -1 || r == -1 || w == -1 || w != r)
	{
		free(bff);
		return (0);
	}
	free(bff);
	close(f);
	return (w);
}
