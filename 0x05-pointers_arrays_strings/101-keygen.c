#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * for the program 101-crackme.
 * Return: 0
 */
int main(void)
{
char psw[84];
int i = 0, s = 0, dh1, dh2;
srand(time(0));
while (s < 2772)
{
psw[i] = 33 + rand() % 94;
s += psw[i++];
}
psw[i] = '\0';
if (s != 2772)
{
dh1 = (s - 2772) / 2;
dh2 = (s - 2772) / 2;
if ((s - 2772) % 2 != 0)
dh1++;
for (i = 0; psw[i]; i++)
{
if (psw[i] >= (33 + dh1))
{
psw[i] -= dh1;
break;
}
}
for (i = 0; psw[i]; i++)
{
if (psw[i] >= (33 + dh2))
{
psw[i] -= dh2;
break;
}
}
}
printf("%s", psw);
return (0);
}
