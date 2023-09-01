#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip,
 * to get from one number to another.
 * @n: long integer
 * @m: long integer
 * Return: the flipped number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 63;
	int comp = 0;
	unsigned long int num;
	unsigned long int Xnum = n ^ m;

	while (a >= 0)
	{
		num = Xnum >> a;
		a--;
		if (num & 1)
			comp++;
	}
	return (comp);
}
