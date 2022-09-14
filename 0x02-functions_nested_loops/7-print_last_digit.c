#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 *
 * Return the last digit.
 */
int print_last_digit(int x)
{
	int i;

	i = x % 10;
	if (x < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
