#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0.
 */

int main(void)
{
int cnt;
unsigned long f1 = 0, f2 = 1, som;
unsigned long f1h1, f1h2, f2h1, f2h2;
unsigned long h1, h2;

for (cnt = 0; cnt < 92; cnt++)
{
som = f1 + f2;
printf("%lu, ", som);
f1 = f2;
f2 = som;
}
f1h1 = f1 / 10000000000;
f2h1 = f2 / 10000000000;
f1h2 = f1 % 10000000000;
f2h2 = f2 % 10000000000;
for (cnt = 93; cnt < 99; cnt++)
{
h1 = f1h1 + f2h1;
h2 = f1h2 + f2h2;
if (f1h2 + f2h2 > 9999999999)
{
h1 += 1;
h2 %= 10000000000;
}
printf("%lu%lu", h1, h2);
if (cnt != 98)
printf(", ");
f1h1 = f2h1;
f1h2 = f2h2;
f2h1 = h1;
f2h2 = h2;
}
printf("\n");
return (0);
}
