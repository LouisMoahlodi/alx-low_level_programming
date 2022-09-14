#include "main.h"

/**
 * times_table - Prints the times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int row, col, num;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (col = 1; col <= 9; col++)
	{
		num = row * col;
		_putchar(',');
		_putchar(' ');
	if (num <= 9)
	{
		_putchar(' ');
		_putchar(num + '0');
	}
	else
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
