#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **moi;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	moi = malloc(sizeof(int *) * height);
	if (moi == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		moi[i] = malloc(sizeof(int) * width);
		if (moi[i] == NULL)
		{
			for (; i >= 0; i--)
				free(moi[i]);
			free(moi);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			moi[i][j] = 0;
	}
	return (moi);
}
