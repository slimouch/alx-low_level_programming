#include "main.h"
#include <stdlib.h>
/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print,
 * 0 if the file cannot be opened or read, or filename is NULL, or
 * write fails or does not write the extpected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffers;
	ssize_t W, R, F;

	if (filename == NULL)
		return (0);
	F = open(filename, O_RDONLY);
	if (F == -1)
		return (-1);
	buffers = malloc(sizeof(char) * letters);
	if (buffers ==  NULL)
		return (0);
	R = read(F, buffers, letters);
	W = write(STDOUT_FILENO, buffers, R);
	if (F == -1 || R == -1 || W == -1 || W != R)
	{
		free(buffers);
		return (0);
	}
	free(buffers);
	close(F);
	return (W);
}

