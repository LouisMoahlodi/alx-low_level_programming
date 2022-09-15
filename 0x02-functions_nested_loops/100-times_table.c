#include "main.h"

/**
 * print_times_table - Print the n times table, starting with 0
 *
 * @n: value of the times table
 *
 *Return: void
 */
void print_times_table(int n)
{
	int row, col, num;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				num = col * row;
				if (col == 0)
				{
					_putchar(num + '0');
				} else if (num < 10 && col != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				} else if (num >= 10 && num < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				} else if (num >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((num / 100) + '0');
					_putchar(((num / 10) % 10) + '0');
					_putchar((num % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
