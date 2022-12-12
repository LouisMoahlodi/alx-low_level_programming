#include "main.h"

/**
 * _puts - Functions prints a string
 *
 * @str: A pointer to the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
