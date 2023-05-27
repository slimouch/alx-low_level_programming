#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything, followed by a new line.
 * @format: list of types of arguments passed to the function
 * @...: list of parameters
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list s;
	char *string, *separator = "";
	int i = 0;

	va_start(s, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(s, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(s, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(s, double));
					break;
				case 's':
					string = va_arg(s, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(s);
}
