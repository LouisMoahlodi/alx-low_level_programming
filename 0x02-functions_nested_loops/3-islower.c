#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 *
 *@C: The character in ASCII code
 *
 * Return: 1 if successful
 * Return: 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
