#include <stdio.h>
#include "main.h"
/**
 * _strstr -  locates a substring.
 * @haystack: the string
 * @needle: the first string
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *un = haystack;
		char *deux = needle;

		while (*un == *deux && *deux != '\0')
		{
			un++;
			deux++;
		}
		if (*deux == '\0')
			return (haystack);
	}
	return (NULL);
}
