#include <stdio.h>
void construire(void) __attribute__ ((constructor));
/**
 * construire - function executed vefore the main
 * Return: void
 */
void construire(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
