#include "main.h"

/**
 * print_alphabet_x10 -prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
int n = 0;
char l;
while (n < 10)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
n++;
}
_putchar('\n');
}
