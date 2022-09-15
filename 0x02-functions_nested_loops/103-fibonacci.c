#include <stdio.h>
/**
 * main - Print the sum of even Fibonacci numbers not exceeding "4,000,000"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 1, a = 2, sum = 0;
	int fib;

	while (a <= 4000000)
	{
		if (a % 2 == 0)

			sum += a;

		fib = a;
		a += x;
		x = fib;

	}
	printf("%d\n", sum);
	return (0);
}
