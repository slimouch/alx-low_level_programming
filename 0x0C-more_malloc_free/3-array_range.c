#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 * @min: minumum range of values
 * @max: maximum range of values
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *str;
	int i, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	str = malloc(sizeof(char) * s);
	if (str == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		str[i] = min++;
	return (str);
}
