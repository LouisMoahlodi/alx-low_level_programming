#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 *
 * @s: String parameter pointer
 * @accept: String parameter
 *
 * Return: the initial length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int initial_length = 0;

	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);
	unsigned int i, j;

	for (i = 0; i < len1; i++)
	{
		bool found_match = false;

		for (j = 0; j < len2; j++)
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
		if (!found_match)
			break;

		else
			initial_length++;
	}
	return (initial_length);
}
