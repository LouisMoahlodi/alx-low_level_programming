#include "main.h"

/**
 * swap_int - Function that swaps the values of two functions
 *
 * @a: An integer value
 * @b: An ineger value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
