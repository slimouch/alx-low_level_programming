#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
int a, b = 0;
while (str[b] != '\0')
{
b++;
}
for (a = 0; a < b; a += 2)
{
_putchar(str[a]);
}
_putchar('\n');
}
