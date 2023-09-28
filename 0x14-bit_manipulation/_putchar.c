#include "main.h"
#include "unistd.h"
/**
 * _putchar - write a character c to stdout
 * @c: the printed character
 * Return: 1 success, -1 failure or errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
