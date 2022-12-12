#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @s: Parameter s
 *
 * Return: A string
 */
char *leet(char *s)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < l)
		{
			if (s[a] == tr[b] || s[a] - ' ' == tr[b])
				s[a] = trw[b];
			b++;
		}
		a++;
	}
	return (s);
}

