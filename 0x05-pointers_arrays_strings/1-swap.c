#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * @a: the 1 int to be swapped
 * @b: the 2 int to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
