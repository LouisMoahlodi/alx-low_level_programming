#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of integers
 *
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: 
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int x;

	int length = 0, row = 0;

	for (i = 0; i < size; i++)
	{
		x = (i * size) + i;
		length += *(a + x);
	}
	for (j = 0; j < size; j++)
	{
		x = (j * size) + (size - 1 - j);
		row += *(a + x);
	}
	printf("%i, %i\n", length, row);
}
