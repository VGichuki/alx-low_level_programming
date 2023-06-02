#include <stdio.h>

/**
 * first - prints a statement before main
 *
 * Return: no return
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
