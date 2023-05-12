#include "main.h"

/**
* _islower - Checks for lowercase character
* @c: int c a character in ASCII code
* Return: 1 for lowercase character or 0 for other
*/

int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
