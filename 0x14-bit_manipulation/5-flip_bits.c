#include "main.h"
/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the long integer
 * @m: the long integer
 * Return: the flipped number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int Max = 63;
	int compteur = 0;
	unsigned long int num;
	unsigned long int Xnum = n ^ m;

	while (Max >= 0)
	{
		num = Xnum >> Max;
		Max--;
		if (num & 1)
			compteur++;
	}
	return (compteur);
}
