#include "main.h"

/**
 * cap_string -  Function capitalizes all words of a string
 *
 * @str: A string
 *
 * Return: Capitalization of string
 */
char *cap_string(char *str)
{
	char a[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len;
	int x = 0;
	int i;

	len = 13;
	while (str[x])
	{
		i = 0;
		while (i < len)
		{
			if ((x == 0 || str[x - 1] == a[i]) && (str[x] >= 'a' && str[x] <= 'z'))
				str[x] -= ' ';
			i++;
		}
		x++;
	}
	return (str);
}
