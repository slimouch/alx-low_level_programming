#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: integer array
 * @size: the size of the array
 * @cmp: a comapre function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size && cmp)
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	return (-1);
}
