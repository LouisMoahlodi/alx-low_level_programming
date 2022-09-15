#include <stdio.h>
/**
 * main - Function prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	long int fibo[50];

	fibo[0] = 1;
	fibo[1] = 2;
	printf("%ld, %ld, ", fibo[0], fibo[1]);

	for (x = 2; x < 50; x++)
	{
		fibo[x] = fibo[x - 1] + fibo[x - 2];
		if (x == 49)
			printf("%ld\n", fibo[x]);
		else
			printf("%ld, ", fibo[x]);
			}
	return (0);
}
