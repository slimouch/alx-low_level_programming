#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers, followed by a new line.
 * @argc: integer
 * @argv: list of characters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int somme = 0;
	char *s;

	while (--argc)
	{
		for (s = argv[argc]; *s; s++)
			if (*s < '0' || *s > '9')
				return (printf("Error\n"), 1);
		somme += atoi(argv[argc]);
	}
	printf("%d\n", somme);
	return (0);
}
