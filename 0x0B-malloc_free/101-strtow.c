#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words.
 * @str: string
 * Return: string
 */
char **strtow(char *str)
{
	char **mtx , *tp;
	int i, k = 0, len = 0, w, c = 0, db, fin;
	
	while (*(str + len))
		len++;
	w = countw(str);
	if (w == 0)
		return (NULL);
	mtx = (char **) malloc(sizeof(char *) * (w + 1));
	if (mtx == NULL)
	if (mtx == NULL)
		return (NULL)
}
