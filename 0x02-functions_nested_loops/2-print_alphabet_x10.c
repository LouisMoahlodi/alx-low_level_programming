#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		char ab;

		for (ab = 'a'; ab <= 'z'; ab++)
		{
			_putchar(ab);
		}
		_putchar ('\n');
	}

}
