#include <stdlib.h>
#include "main.h"
/**
 * memor - to fill memory.
 * @ms: string
 * @scp: string
 * @a: integer
 * Return: a pointer to the memory.
 */
char *memor(char *ms, char scp, unsigned int a)
{
	unsigned int j;

	for (j = 0; j < a; j++)
	{
		ms[j] = scp;
	}
	return (ms);
}
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: integer
 * @size: integer
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	memor(str, 0, nmemb * size);
	return (str);
}
