#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: nothing
 */

int main(void)
{
int n = 0;
long m = 1, k = 2;
while (n < 50)
{
if (n == 0)
printf("%ld", m);
else if (n == 1)
printf(", %ld", k);
else
{
k += m;
m = k - m;
printf(", %ld", k);
}
++n;
}
printf("\n");
return (0);
}
