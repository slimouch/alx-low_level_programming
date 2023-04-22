#include <stdio.h>
/**
 *main - a program that prints the alphabet in lowercase
 *and then in uppercase followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
