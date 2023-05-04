#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: character
 * Return: character returned
 */
char *leet(char *n)
{
int a, b;
char p1[] = "aAeEoOtTlL";
char p2[] = "4433007711";
for (a = 0; n[a] != '\0'; a++)
{
for (b = 0; b < 10; b++)
{
if (n[a] == p1[b])
n[a] = p2[b];
}
}
return (n);
}
