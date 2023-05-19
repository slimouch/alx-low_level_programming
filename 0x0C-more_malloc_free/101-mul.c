#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * isDigit - checks the nature of the characater
 * @str: string
 * Return: 0 or 1
 */
int isDigit(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] < '0' || str[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * strl - the length if a string
 * @s: string
 * Return: the len of s
 */
int strl(char *str)
{
	int a = 0;

	while (str[a] != '\0')
		a++;
	return (a);
}
/**
 * error - to handle the main errors
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers.
 * @argc: numbers of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, crry, dg1, dg2, *rst, j = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !isDigit(s1) || !isDigit(s2))
		error();
	l1 = strl(s1);
	l2 = strl(s2);
	l = l1 + l2 + 1;
	rst = malloc(sizeof(int) * l);
	if (!rst)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		rst[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		dg1 = s1[l1] - '0';
		crry = 0;
		for (l2 = strl(s2) - 1; l2 >= 0; l2--)
		{
			dg2 = s2[l2] - '0';
			crry += rst[l1 + l2 + 1] + (dg1 * dg2);
			rst[l1 + l2 + 1] = crry % 10;
			crry /= 10;
		}
		if (crry > 0)
			rst[l1 + l2 + 1] += crry;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (rst[i])
			j = 1;
		if (j)
			_putchar(rst[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(rst);
	return (0);
}
