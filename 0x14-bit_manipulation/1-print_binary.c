#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, compteur;
	unsigned long int number;

	i = 63;
	compteur = 0;
	while (i >= 0)
	{
		number = n >> i;
		i--;
		if (number & 1)
		{
			_putchar('1');
			compteur++;
		}
		else if (compteur)
			_putchar('0');
	}
	if (!compteur)
		_putchar('0');
}
