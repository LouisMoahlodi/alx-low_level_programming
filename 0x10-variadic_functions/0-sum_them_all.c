#include "variadic_functions.h"

/**
 * sum_them_all - Function that sums up all of its parameters
 *
 * @n: number of extra parameters
 *
 * Return: Result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int result;

	va_start(list, n);
	for (i = 0, result = 0; i < n; i++)
		result += va_arg(list, int);

	va_end(list);

	return (result);
}
