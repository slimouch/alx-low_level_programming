#include <stdio.h>
/**
 *main - a program that prints the alphabet in lowercase
 *followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
