#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		if (*b > '1' || *b < '0')
			return (0);
		dec = (*b - '0') + 2 * dec;
	}
	return (dec);
}
