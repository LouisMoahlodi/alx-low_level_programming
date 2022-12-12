#include "main.h"

/**
 * rev_string - Function to reverse a string
 *
 * @s: char array string type
 *
 * Return: 0 Always (Success)
 */
void rev_string(char *s)
{
	int x, y, z;
	char h;

	for (x = 0; s[x] != '\0'; x++)
		;

	z = x;
	for (x--, y = 0; y < z / 2; x--, y++)
	{
		h = s[y];
	       s[y] = s[x];
		s[x] = h;
	}
}
