#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @str: a string pointer
 * Return: a string pointer
 */
char *rot13(char *str)
{
int a, b;
char inf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (a = 0; str[a] != '\0'; a++)
{
for (b = 0; b < 52; b++)
{
if (str[a] == inf[b])
{
str[a] = rot[b];
break;
}
}
}
return (str);
}
