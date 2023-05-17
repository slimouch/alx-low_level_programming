#include "main.h"
#include <stdlib.h>
/**
 * countw - a function that counts
 * @s: string
 * Return: integer
 */
int countw(char *s)
{
	int f, c, wd;

	f = 0;
	wd = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			wd++;
		}
	}
	return (wd);
}
/**
 * strtow - splits a string into words.
 * @str: string
 * Return: string
 */
char **strtow(char *str)
{
	char **mtx, *tp;
	int i, k = 0, len = 0, w, c = 0, db, fin;

	while (*(str + len))
		len++;
	w = countw(str);
	if (w == 0)
		return (NULL);
	mtx = (char **) malloc(sizeof(char *) * (w + 1));
	if (mtx == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				fin = i;
				tp = (char *) malloc(sizeof(char) * (c + 1));
				if (tp == NULL)
					return (NULL);
				while (db < fin)
					*tp++ = str[db++];
				*tp = '\0';
				mtx[k] = tp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			db = i;
	}
	mtx[k] = NULL;
	return (mtx);
}
