#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * (excluded), followed by a new line.
 * Return: always (success)
 */
int main(void)
{
int i, j = 0;
do {
if ((i % 3 == 0) || (i % 5 == 0))
{
j += i;
}
i++;
} while (i < 1024)
printf("%d\n", j);
return (0);
}
