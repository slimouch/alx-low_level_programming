#include <stdio.h>
/**
 *main - a program that prints numbers
 *followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 50; k < 58; k++)
{
if (k > j && j > i)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}