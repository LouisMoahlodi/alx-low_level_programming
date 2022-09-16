#include "main.h"

/**
 * print_triangle - Function prints a triangle using "#"
 *
 * @size: Is the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, col, space;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (col = size - row; col > 1; col--)
			_putchar(' ');
		for (space = row + col; space >= 1; space--)
			_putchar('#');
		_putchar('\n');
	}
}
