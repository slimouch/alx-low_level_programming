#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int a, comp;
	unsigned long int number;

	a = 63;
	comp = 0;
	while (a >= 0)
	{
		number = n >> a;
		a--;
		if (number & 1)
		{
			_putchar('1');
			comp++;
		}
		else if (comp)
			_putchar('0');
	}
	if (!comp)
		_putchar('0');
}
