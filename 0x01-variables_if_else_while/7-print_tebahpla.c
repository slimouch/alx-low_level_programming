#include <stdio.h>
/**
 *main - a program that prints the alphabet in lowercase
 *in reverse followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 25;
while (i >= 0)
{
putchar(alpha[i]);
i--;
}
putchar('\n');
return (0);
}
