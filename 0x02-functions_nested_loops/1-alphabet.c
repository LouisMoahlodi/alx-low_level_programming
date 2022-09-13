#include "main.h"

/**
 * main - Print the alphabet in lowercase
 *
 * Using the "void print_alphabet(void);" function
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		_putchar(ab);
	}
	_putchar ('\n');
}
