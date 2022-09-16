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

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("Fizzbuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%i", x);
		if (x < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
