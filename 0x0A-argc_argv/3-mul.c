#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the multiplication,
 * followed by a new line.
 * @argc: integer
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int somme;

	if (argc == 3)
	{
		somme = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", somme);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
