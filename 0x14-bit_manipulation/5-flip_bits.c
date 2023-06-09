#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: long integer
 * @m: long integer
 * Return: the number need to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 63;
	int cmp = 0;
	unsigned long int number;
	unsigned long int Xnumber = n ^ m;

	while (a >= 0)
	{
		number = Xnumber >> a;
		if (number & 1)
			cmp++;
	}
	return (cmp);
}
