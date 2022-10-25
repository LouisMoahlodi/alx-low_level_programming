#include <stdio.h>

/**
 * toofast - function executed before main function is executed
 *
 * Return: void
 */
void __attribute__ ((contstructor)) toofast()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
