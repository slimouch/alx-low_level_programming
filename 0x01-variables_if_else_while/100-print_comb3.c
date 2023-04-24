#include <stdio.h>
/**
 *main - a program that prints combo of 2  numbers
 *followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
