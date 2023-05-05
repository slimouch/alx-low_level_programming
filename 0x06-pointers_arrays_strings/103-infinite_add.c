#include "main.h"
#include "rev_string.c"
/**
 * infinite_add - adds two numbers.
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, a = 0, b = 0, dg = 0, v1 = 0, v2 = 0, tmp = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
		return (0);
	while (b >= 0 || a >= 0 || over == 1)
	{
		if (a < 0)
			v1 = 0;
		else
			v1 = *(n1 + a) - '0';
		if (b < 0)
			v2 = 0;
		else
			v2 = *(n2 + b) - '0';
		tmp = v1 + v2 + over;
		if (tmp >= 10)
			over = 1;
		else
			over = 0;
		if (dg >= (size_r - 1))
			return (0);
		*(r + dg) = (tmp % 10) + '0';
		dg++;
		b--;
		a--;
	}
	if (dg == size_r)
		return (0);
	*(r + dg) = '\0';
	rev_string(r);
	return (r);
}
