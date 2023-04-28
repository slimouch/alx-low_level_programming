#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
long int num;
long int mx;
long int a;
num = 612852475143;
mx = -1;

while (num % 2 == 0)
{
mx = 2;
num /= 2;
}
for (a = 3; a <= sqrt(num); a = a + 2)
{
while (num % a == 0)
{
mx = a;
num = num / a;
}
}
if (num > 2)
mx = num;
printf("%ld\n", mx);
return (0);
}
