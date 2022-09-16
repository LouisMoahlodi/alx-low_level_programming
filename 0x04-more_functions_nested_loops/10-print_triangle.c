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
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 1; col < (size - row); col++)
			_putchar(' ');

		for (col--; col < size; col++)
			_putchar('#');
		if (row < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
