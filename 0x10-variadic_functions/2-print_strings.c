#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between strings.
 * @n: integer
 * @...: list of parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *string;
	unsigned int i;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(s, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
