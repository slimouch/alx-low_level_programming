#include <stdio.h>
/**
 * main -  that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 * Return: nothing
 */

int main(void)
{
int a = 0;
long b = 1, c = 2, som = c;
while (b + c < 4000000)
{
c += b;
if (c % 2 == 0)
som += c;
b = c - b;
++a;
}
printf("%ld\n", som);
return (0);
}
