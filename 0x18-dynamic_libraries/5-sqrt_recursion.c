#include "main.h"

/**
 * _sqrt_recursion - Function returns the the natural square root of a number
 *
 * @n: Intger to squared
 *
 * Return: result of n squared
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Recursive square root
 *
 * @n: integer
 * @i: iterator
 *
 * Return: result
 *
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
