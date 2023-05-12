#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @dest: the destinatiom
 * @src: the source
 * Return: a pointer to destination
 */
char *_strcat(char *dest, char *src)
{
int dl = 0, a;
while (dest[dl])
{
dl++;
}
for (a = 0; src[a] != 0; a++)
{
dest[dl] = src[a];
dl++;
}
dest[dl] = '\0';
return (dest);
}
