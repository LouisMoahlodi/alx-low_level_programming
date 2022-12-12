#include "main.h"

/**
 * is_prime_number - Function that checks if the input intger is a prime number
 *
 * @n: input integer
 *
 * Return: 1 if succesful: return 0 if not
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Checks the the prime numbers
 *
 * @n: Integer
 * @i: An iterator
 *
 * Return: 1 if prime number: 0 if not
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
