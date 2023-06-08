#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, cmp;
	unsigned long int number;

	i = 63;
	cmp = 0;
	while (i >= 0)
	{
		number = n >> i;
		i--;
		if (number & 1)
		{
			_putchar('1');
			cmp++;
		}
		else if (cmp)
			_putchar('0');
	}
	if (!cmp)
		_putchar('0');
}
