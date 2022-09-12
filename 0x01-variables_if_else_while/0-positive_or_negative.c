#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Establish that the random number is either positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d", n)
		printf(" is positive\n");
	}
	if (n < 0)
	{
		printf("%d", n);
		printf(" is negative\n");
	}
	if (n == 0)
	{
		printf("%d", n);
		printf(" is zero\n");
	}
	return (0);
}
