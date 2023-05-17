#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: string
 * Return: NULL if str = NULL, a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ss;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	ss = malloc(sizeof(char) * (i + 1));
	if (ss == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		ss[j] = str[j];
	return (ss);
}
