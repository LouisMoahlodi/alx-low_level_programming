#include "main.h"

/**
 * print_line - Function that prints "_" based on n
 *
 * @n: Is an empty value to print the underscore
 *
 * Return: void
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar ('_');
	}
	_putchar('\n');
}
