#include "main.h"

/**
 * _strcmp - Function compares two strings.
 *
 * @s1: Comparing variable
 * @s2: Comparing variable
 *
 * Return: 0 if strings the same; 1 if not the same
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])

			return (s1[i] - s2[i]);
	}
	return (0);
}
