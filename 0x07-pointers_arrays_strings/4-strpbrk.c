#include "main.h"

/**
 * _strpbrk - Function locates first occurrence of any of the bytes in string
 *
 * @s: pointer string
 * @accept: pointer to the character in s
 *
 * Return: NULL OR ACCEPT
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int pos;
	int value;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)

	pos = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					value = 1;
				}
			}
		}
	}
	if (value == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (NULL);
	}
}
