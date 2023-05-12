#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string to be appended upon
 * @src: string to be appended to destination
 * @n: number of bytes from src to dest
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, dl = 0;
while (dest[i++])
dl++;
for (i = 0; src[i] && i < n; i++)
dest[dl++] = src[i];
return (dest);
}
