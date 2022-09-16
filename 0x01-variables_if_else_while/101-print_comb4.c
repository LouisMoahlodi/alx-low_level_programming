#include <stdio.h>
/**
 * main - Print all possible different combinations of 3 digits.
 *
 *  The 3 digits must be different.
 *  012, 120, 102, 021, 201, 210 are considered the same combination.
 *  print only the smallest combination of 3 digits.
 *
 *   Can only use `putchar` to print to console.
 *   Can only use `putchar` up to 6 times.
 *   Not allowed to use any variables of type `char`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, a;

	for (x = 0; x < 1000; x++)
	{
		y = x / 100;
		z = (x / 10) % 10;
		a = x % 10;

		if (y < z && z < a)
		{
			putchar(y + '0');
			putchar(z + '0');
			putchar(a + '0');

			if (x < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
