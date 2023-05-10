#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * @v: integer
 * Return: the natural square root of a number.
 */
int sqr(int n, int v);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr - calcul of the natural square
 * @n: integer
 * @v: the value of the square
 * Return: integer
 */
int sqr(int n, int v)
{
	int sq = v * v;

	if (sq == n)
		return (v);
	else if (sq < n)
		return (sqr(n, v + 1));
	else
		return (-1);
}


