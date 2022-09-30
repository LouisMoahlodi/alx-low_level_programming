#include "main.h"

/**
 * is_palindrome - Identifies if a string is a plalindrome
 *
 * @s: A string
 *
 * Return: 1 if "s" is a palindrome: 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - Returns the length of a string using recursion
 *
 * @s: A string
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comp - Compares each charator of the string
 *
 * @s: A string
 * @n1: smallest iterator
 * @n2: biggest iterator
 *
 * Return: 0
 */
int comp(char *s, int n1, int n2)
{
	if (s[n1] == s[n2])
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comp(s, n1 + 1, n2 - 1));
	}
	return (0);
}
