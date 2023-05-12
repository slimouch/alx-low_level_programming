#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: number to be computed.
 * Return: absolute value of a number or zero
 */
int _abs(int c)
{
if (c < 0)
{
int abs_v;
abs_v = c * -1;
return (abs_v);
}
return (c);
}
