#include "main.h"

/**
* _isalpha - checks for alphabetic character.
* @c: int c a character in ASCII code
* Return: 1 for lowercase character or 0 for other
*/

int _isalpha(int c)
{
if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
