#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main
 * @argc: arguments
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *s = (char *)main;
	int t;

	if (argc != 2)
		printf("Error\n"), exit(1);
	t = atoi(argv[1]);
	if (t < 0)
		printf("Error\n"), exit(2);
	while (t--)
		printf("%02hhx%s", *s++, t ? " " : "\n");
	return (0);
}
