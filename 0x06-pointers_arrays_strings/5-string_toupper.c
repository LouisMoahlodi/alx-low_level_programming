#include "main.h"

/**
 * string_toupper - Function changes lowercase letters of string to uppercase
 *
 * @str: A string
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 'a' && str[i] < 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
