#include "main.h"
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

	F = open(filename, O_RDONLY);
	if (F == -1)
		return (-1);
	buffers = malloc(sizeof(char) * letters);
	R = read(F, buffers, letters);
	W = write(STDOUT_FILENO, buffers, R);
	free(buffers);
	clode(F);
	return (W);
}

