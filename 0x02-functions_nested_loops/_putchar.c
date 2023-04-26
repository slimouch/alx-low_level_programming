#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character a to stdout
 * @a: The character to print
 * Return: Success 1.
 * Error: -1
 */
int _putchar(char a)
{
return (write(1, &a, 1));
}
