#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int numero;
	int i = 63;
	int cmp = 0;

	while (i >= 0)
	{
		numero = n >> i;
		i--;
		if (numero & 1)
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
