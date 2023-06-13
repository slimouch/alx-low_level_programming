#include "main.h"
/**
 * CreatBuff - to create a buffer
 * @filename: the name of the file buffer
 * Return:  a pointer to the new file buffer
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
 * @desc: the closed file descriptor.
 * Return: void
 */
void CloseF(int desc)
{
int F;

F = close(desc);
if (F == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", desc);
exit(100);
}
}
/**
 * main - Copy the file contents to another
 * @argc: the number of arg
 * @argv: an array
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int R, W, De, A;
char *buf;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buf = CreatBuff(argv[2]);
De = open(argv[1], O_RDONLY);
R = read(De, buf, 1024);
A = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while (R >= 0)
{
if (De == -1 || R == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98);
}
W = write(A, buf, R);
if (A == -1 || W == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}
R = read(De, buf, 1024);
A = open(argv[2], O_WRONLY | O_APPEND);
}
free(buf);
CloseF(De);
CloseF(A);
return (0);
}
