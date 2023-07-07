#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the long integer
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1UL;

	if (index > 63)
		return (-1);
	*n = ((m << index) | *n);
	return (1);
}
