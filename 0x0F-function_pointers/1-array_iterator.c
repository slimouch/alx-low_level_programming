#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: integer array
 * @size: the size of the array
 * @action: func pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *fin = array + size - 1;

	if (array && size && action)
		while (array <= fin)
			action(*array++);
}
