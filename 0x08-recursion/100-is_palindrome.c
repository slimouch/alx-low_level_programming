#include "main.h"
/**
* _strlen_recursion - returns the length of a string
* @s: string
* Return: integer
*/

int _strlen_recursion(char *s) 
{
if (*s == '\0')
return (0);
else
return ( 1 + _strlen_recursion(s + 1));
}
/**
* comparer - compare the string characters
* @s: string to be compared
* @a: integer 
* @b: integer
* Return: integer
*/
int comparer(char *s, int a, int b)
{
if (*(s + a) == *(s + b))
{
if (a == b || a == b + 1)
return (1);
return (0 + comparer(s, a + 1, b -1));
}
return (0);
}
/**
* is_palindrome - returns 1 if a string is a palindrome
* and 0 if not.
* @s: string
* Return: integer 0 or 1
*/
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comparer(s, 0, _strlen_recursion(s) - 1));
}
