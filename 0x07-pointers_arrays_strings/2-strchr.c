#include "main.h"

/**
 * _strchr -  function that locates a character in a string
 *
 * @s: pointer string
 * @c: First character in s string
 *
 * Return:: c or NULL
 */
char *_strchr(const char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);

	return (NULL);
}
