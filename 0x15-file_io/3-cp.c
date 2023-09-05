#include "main.h"
/**
 * CreatBuff - to create a buffer
 * @filename: the file name
 * Return: a pointer to the new file buffer
 */
char *CreatBuff(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}
/**
 * CloseF - close a file descriptor
 * @desc: the closed file descriptor
 * Return: void
 */
void CloseF(int desc)
{
	int f;

	f = close(desc);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", desc);
		exit(100);
	}
}
/**
 * main - copy the file contents to another
 * @argc: the number of arguments
 * @argv: an array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int w, r, dsc, a;
	char *bff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bff = CreatBuff(argv[2]);
	dsc = open(argv[1], O_RDONLY);
	r = read(dsc, bff, 1024);
	a = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (dsc == -1 || r == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file
				NAME_OF_THE_FILE %s\n", argv[1]);
		free(bff);
		exit(98);
		}
		w = write(a, bff, r);
		if (a == -1 || w == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to
				NAME_OF_THE_FILE %s\n", argv[2]);
		free(bff);
		exit(99);
		}
		r = read(dsc, bff, 1024);
		a = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(bff);
	CloseF(dsc);
	CloseF(a);
	return (0);
}
