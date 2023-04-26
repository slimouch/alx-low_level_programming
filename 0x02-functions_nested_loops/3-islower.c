#include "main.h"
/**
 * _islower - a function that  checks for lowercase character.
 * @c: a character in ASCII code
 * Returns 1 if c is lowercase.
 * Returns 0 if not the case.
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
