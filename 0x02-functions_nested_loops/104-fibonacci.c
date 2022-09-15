#include <stdio.h>
/**
 * main - Find and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int x, y, a, a1, a2, b1, b2;

	y = 1;
	a = 2;

	printf("%lu", y);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", a);
		a = a + y;
		y = a - y;
	}

	a1 = y / 1000000000;
	a2 = y % 1000000000;
	b1 = a / 1000000000;
	b2 = a % 1000000000;

	for (x = 92; x < 99; x++)
	{
		printf(", %lu", b1 + (b2 / 1000000000));
		printf("%lu", b2 % 1000000000);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}

	printf("\n");

	return (0);
}
