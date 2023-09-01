#include "main.h"
/**
 * _putchar - write a character c to the stdout
 * @c: the printed character.
 * Return: 1 success, -1 error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
