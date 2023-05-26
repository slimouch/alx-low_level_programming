#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: integer
 * @...: number of parametrs.
 * Return: 0 if n equals zero or sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int a, som = 0;

	va_start(par, n);
	for (a = 0; a < n; a++)
		som += va_arg(par, int);
	va_end(par);
	return (som);
}
