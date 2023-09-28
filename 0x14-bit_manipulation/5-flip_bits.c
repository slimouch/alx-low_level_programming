#include "main.h"
/**
 * flip_bits - returns the number of bits you want to flip
 * to get from one number to another
 * @n: long integer
 * @m: long integer
 * Return: the flipped number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num = 63;
	int cmp = 0;
	unsigned long int numero;
	unsigned long int numeroX = n ^ m;

	while (num >= 0)
	{
		numero = numeroX >> num;
		num--;
		if (numero & 1)
			cmp++;
	}
	return (cmp);
}
