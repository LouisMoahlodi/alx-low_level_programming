#include "main.h"

/**
 * factorial - Function returns the factorial of a given  number
 *
 * @n: empty integer value
 *
 * Return: 0 success; if not return -1
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
