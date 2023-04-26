#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @i: the number to start with
 * Return: Always 0.
 */

void print_to_98(int i)
{
if (i <= 98)
{
for (; i <= 98; i++)
{
if (i == 98)
{
printf("%d", i);
printf('\n');
break;
}
else
{
printf("%d, ", i);
}
}
}
else
{
for (; i >= 98; i--)
{
if (i == 98)
{
printf("%d", i);
printf('\n');
break;
}
else
{
printf("%d, ", i);
}
}
}
}
