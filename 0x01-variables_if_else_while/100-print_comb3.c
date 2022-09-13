#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int i;

	for (num = 0 ; num < 9 ; num++)
	{
		i = num + 1;
		do {
			putchar('0' + num);
			putchar('0' + i);
			if (num < 8)
			{
				putchar(',');
				putchar(32);
			}
			i++;
		} while (i < 10);
	}
	putchar('\n');
	return (0);
}
