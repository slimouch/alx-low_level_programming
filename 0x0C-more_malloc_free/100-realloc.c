#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to a memory
 * @old_size: the old size memory
 * @new_size: the new size memory
 * Return: a pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *ostr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	str = malloc(new_size);
	if (!str)
		return (NULL);
	ostr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			str[i] = ostr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			str[i] = ostr[i];
	}
	free(ptr);
	return (str);
}
