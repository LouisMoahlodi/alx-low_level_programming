#include "main.h"

/**
 * reverse_array - Function that prints an  array of integers in reverse
 *
 * @a: Integer for array pointer
 * @n: an element of an array int
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *left;
	int i;
	int right;
	int x;

	left = a;
	for (i = 0; i < n; i++)
		left++;
	for (x = 0; x <= (i - 1) / 2; x++) /*Swaping the array */
	{
		right = a[x];
		a[x] = *left;
		*left = right;
		left--;
	}
}
