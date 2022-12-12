#include "main.h"

/**
 * _pow_recursion - Function return the result of x raised to the power of y
 *
 * @x: base number
 * @y: exponent
 *
 * Return: result of power of number
 */
int _pow_recursion(int x, int y)
{
	if (y != 0 && y >= 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
