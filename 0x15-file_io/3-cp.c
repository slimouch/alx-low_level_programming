#include "main.h"
/**
 * CreatBuff -  to create a buffer
 * @filename: the file name
 * Return: a pointer the new file buffer
 */
char *CreatBuff(char *filename)
{
	char *bf;

	bf = malloc(sizeof(char) * 1024);
	if (bf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (bf);
}
/**
 * CloseF - to close a file descriptor
 * @desc: the closed file descriptor
 * Return: void
 */
void CloseF(int desc)
{
	int F;

	F =  close(desc);
	if (F == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", desc);
		exit(100);
	}
}
/**
 * main - copy the file content to another
 * @argc: the number of argumant
 * @argv: an array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int RD, WR, DE, A;
	char *bf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bf = CreatBuff(argv[2]);
	DE = open(argv[1], O_RDONLY);
	RD = read(DE, bf, 1024);
	A = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (DE == -1  || RD == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(bf);
		exit(98);
		}
		WR = write(A, bf, RD);
		if (A == -1 || WR == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(bf);
		exit(99);
		}
		RD = read(DE, bf, 1024);
		A = open(argv[2], O_WRONLY | O_APPEND);
	} while (RD > 0);
	free(bf);
	CloseF(DE);
	CloseF(A);
	return (0);
}
