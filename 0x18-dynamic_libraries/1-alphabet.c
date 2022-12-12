#include "main.h"

/**
 * print_alphabet - Function that print the alphabet in lowercase with _putchar
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
