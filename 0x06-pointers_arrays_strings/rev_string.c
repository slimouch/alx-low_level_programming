#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
int l = 0, i = 0;
char temp;
while (s[i++])
l++;
for (i = l - 1; i >= l / 2; i--)
{
temp = s[i];
s[i] = s[l - i - 1];
s[l - i - 1] = temp;
}
}

