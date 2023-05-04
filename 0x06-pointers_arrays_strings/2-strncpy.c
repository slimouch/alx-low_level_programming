#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: the string destination
 * @src: the source destinaton
 * @n: the max number of bytes to be copied from src
 * Return: a pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, srcl = 0;
while (src[i++])
srcl++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = srcl; i < n; i++)
dest[i] = '\0';
return (dest);
}
