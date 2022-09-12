#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;
	char letter;

	for (hex = 0; hex <= 10; hex++)
	{
		putchar((hex % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar ('\n');
	return (0);
}
