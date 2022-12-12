#include <stdio.h>

/**
 * main - Print all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99.
 *
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * `00 01` and `01 00` are considered as the same combination.
 *
 * Can only use `putchar` to print to console.
 * Can only use `putchar` up to 8 times.
 * Not allowed to use any variable of type `char`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; j < 100; j++)
		{
			c = j / 10;
			d = j % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
