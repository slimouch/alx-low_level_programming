#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: array of 8 elements
 * Return: success
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[m][n]);
		_putchar('\n');
	}
}
