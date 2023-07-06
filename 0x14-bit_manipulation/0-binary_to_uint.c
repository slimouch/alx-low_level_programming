#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the converted number or 0
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec = (*b - '0') + dec * 2;
	}
	return (dec);
}
