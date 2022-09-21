#include "main.h"

/**
 * _strcmp - Function compares two strings.
 *
 * @s1: Comparing variable
 * @s2: Comparing variable
 *
 * Return: 1 if strings the same; 0 if not the same
 */
int _strcmp(char *s1, char *s2)
{
	int value = 0;
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)

		if (s1[i] != s2[i])
		{
			value = 1;
			break;
		}
	if (value == 0)
		return (0);
	else
		return ();
}
