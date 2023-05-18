#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc.
 * @b: integer
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = nalloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
