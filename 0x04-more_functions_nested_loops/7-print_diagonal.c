#include "main.h"

/**
 * print_diagonal - Function prints a diagonal line based on "n"
 *
 * @n: Is an empty value to print backslashes
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (x < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
