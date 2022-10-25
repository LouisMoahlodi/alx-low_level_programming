#include <stdio.h>

void __attribute__ ((constructor)) toofast();

/**
 * toofast - function executed before main function is executed
 *
 * Return: void
 */
void toofast(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
