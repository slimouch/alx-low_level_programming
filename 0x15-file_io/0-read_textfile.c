#include "main.h"
#include <stdlib.h>
/**
 * read_textfile -  reads a text file and prints it to the POSIX stdout
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print,
 * 0 if the file cannot be opened or read, or filename is NULL, or
 * write fails or does not write the extpected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t W, R, F;

	if (filename == NULL)
		return (0);
	bf = malloc(sizeof(char) * letters);
	if (bf ==  NULL)
		return (0);
	F = open(filename, O_RDONLY);
	R = read(F, bf, letters);
	W = write(STDOUT_FILENO, bf, R);
	if (F == -1 || R == -1 || W == -1 || W != R)
	{
		free(bf);
		return (0);
	}
	free(bf);
	close(F);
	return (W);
}
