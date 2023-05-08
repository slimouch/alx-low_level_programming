#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - sets the value of a pointer to a char.
 * @a: integer
 * @size: size of integer
 * Return: success
 */
void print_diagsums(int *a, int size)
{
	int m, n, s1 = 0, s2 = 0;

	for (m = 0; m <= (size * size); m = m + size + 1)
		s1 = s1 + a[m];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	s2 = s2 + a[n];
	printf("%d, %d\n", s1, s2);
}
