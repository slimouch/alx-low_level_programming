#include <stdio.h>
/**
 *main - a program that prints numbers
 *separated by ,followed by a space
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(",");
putchar(" ");
}
}
putchar('\n');
return (0);
}
