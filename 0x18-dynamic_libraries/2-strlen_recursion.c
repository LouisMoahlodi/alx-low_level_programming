#include "main.h"

/**
 * _strlen_recursion - Function returns the length of a string using recursion
 *
 * @s: Pointer string
 *
 * Return: 0 Always (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
