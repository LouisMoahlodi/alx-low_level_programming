#include "main.h"

/**
 * reverse_array - Function that prints an  array of integers in reverse
 *
 * @a: Integer for array pointer
 * @n: Integer type
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int left;
	int right;
	
	reverse_array(a, n);
	
	left = *a;
	while (left < right)
	{
		n = right;
		right = left;
		left = n;
		left++;
		right--;
	}
	reverse_array(a, n);
}
void reverse(int * a, int n)
{
	int * aEnd = (a + n -1);

	while (a <= aEnd)
	{
		printf("%d, ", *a);
		a++;
	}
}
