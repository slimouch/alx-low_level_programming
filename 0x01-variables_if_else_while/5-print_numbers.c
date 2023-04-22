#include <stdio.h>
/**
 *main - a program that prints all single digit numbers
 *of base 10 starting from 0
 *followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
char num[10] = "0123456789";
int i;

for (i = 0; i < 10; i++)
{
putchar(num[i]);
}
putchar('\n');
return (0);
}
