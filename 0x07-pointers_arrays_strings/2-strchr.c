#include "main.h"

/**
 * _strchr -  function that locates a character in a string
 *
 * @s: pointer string
 * @c: First character in s string
 *
 * Return:: c or NULL
 */
char *_strchr(char *s, char c)
{
	char *x;
	char *y;

	y = &c;

	if (*y == 0)
	{
		return ((char *) s);
	}
	for ( ; *s != 0; s += 1)
	{
		if (*s != *y)
		{
			continue;
		}
		x = s;
		while (1)
		{
			if (*y == 0)
			{
				return ((char *) s);
			}
			if (*x++ != *y++)
			{
				break;
			}
		}
		y = &c;
	}
	return (NULL);
}
