#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: integer
 * @argv: const list of characters
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	if (argc == 2)
	{
	int i, lcent = 0, mn = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (mn >= cents[i])
		{
			lcent += mn / cents[i];
			mn = mn % cents[i];
			if (mn % cents[i] == 0)
			{
				break;
			}
		}
	}
        printf("%d\n", lcent);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
        return (0);
}
