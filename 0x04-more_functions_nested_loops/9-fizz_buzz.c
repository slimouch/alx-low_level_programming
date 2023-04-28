#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0 (Success)
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if (a % 3 == 0 && a % 5 != 0)
printf(" Fizz");
else if (a % 5 == 0 && a % 3 != 0)
printf(" Buzz");
else if (a % 5 == 0 && a % 3 == 0)
printf(" FizzBuzz");
else if (a == 1)
printf("%d", a);
else
printf(" %d", a);
}
printf("\n");
return (0);
}
