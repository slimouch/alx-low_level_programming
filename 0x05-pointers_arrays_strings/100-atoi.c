#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: the converted pointer
 * Return: int
 */
int _atoi(char *s)
{
int i = 0, j = 1, k = 0;
unsigned int uni = 0;
while (s[i])
{
if (s[i] == 45)
{
j *= -1;
}
while (s[i] >= 48 && s[i] <= 57)
{
k = 1;
uni = (uni * 10) + (s[i] - '0');
i++;
}
if (k == 1)
{
break;
}
i++;
}
uni *= j;
return (uni);
}
