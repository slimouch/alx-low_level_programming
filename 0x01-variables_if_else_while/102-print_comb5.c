#include <stdio.h>
/**
 *main - a program that prints all possible combo
 *of two digit  numbers
 *followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
if (j > i)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
