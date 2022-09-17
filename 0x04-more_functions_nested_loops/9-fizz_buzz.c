#include <stdio.h>
#include "main.h"

/**
 * main -  Print the numbers from 1 to 100,
 * multiples of 3 = Fizz, multiples of 5 = Buzz, multiples of 3 & 5 = FizzBuzz
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int x;

	x = 1;
	printf("%d", x);
	for (x = 2; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", x);
		}
		printf("\n");
	}
	return (0);
}
