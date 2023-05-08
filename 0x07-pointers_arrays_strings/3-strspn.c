#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the initial segment
 * @accept: the accepted segment
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, v = 0, c;

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;
		for (b = 0; accept[b] != '\n'; b++)
		{
			if (accept[b] == s[a])
			{
				v++;
				c = 1;
			}
		}
		if (c == 0)
			return (v);
	}
	return (v);
}
