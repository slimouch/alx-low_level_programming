#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: the buffer pointed
 * @size: the size of the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
int a, d, c = 0;
if (size <= 0)
	printf("\n");
while (c < size)
{
	d = size - c < 10 ? size - c : 10;
	printf("%08x", c);
	for (a = 0; a < 10; a++)
	{
		if (a < d)
			printf("%02x", *(b + c + a));
		else
			printf("  ");
		if (a % 2)
			printf(" ");
	}
	for (a = 0; a < d; a++)
	{
		int e = *(b + c + a);

		if (e < 32 || e > 132)
			e = '.';
		printf("%c", e);
	}
	printf("\n");
	c += 10;
}
}
