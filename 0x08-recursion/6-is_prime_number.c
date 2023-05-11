#include "main.h"
int verify_p(int n, int v);
/**
* is_prime_number - returns 1 if it is a prime number,
* otherwise return 0.
* @n: the integer
* Return: integer
*/
int is_prime_number(int n)
{
return (verify_p(n, 1));
}
/**
* verify_p - check if the input is a prime number
* @n: integer
* @v: integer
* Return: integer
*/
int verify_p(int n, int v)
{
if (n <= 1)
return (0);
else if (n % v == 0 && v > 1)
return (0);
else if ((n / v) < v)
return (1);
return (verify_p(n, v + 1));
}
