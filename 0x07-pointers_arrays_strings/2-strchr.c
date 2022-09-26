#include "main.h"

/**
 * _strchr -  function that locates a character in a string
 *
 * @s: pointer string
 * @c: First character in s string
 *
 * Return:: c or NULL
 */
char *_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}
