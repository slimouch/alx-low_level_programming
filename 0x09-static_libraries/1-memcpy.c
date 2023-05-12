#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: n bytes
 * Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
