#include "main.h"

/**
 * str_concat - Concatenaates two strings using malloc
 *
 * @s1: destination pointer string
 * @s2: source pointer string
 *
 * Return: To new memory address: or "NUll" if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *new;

	int len1;
	int len2;
	int i;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	new = malloc(sizeof(char) * (len1 + len2 + 1));

	/* check if malloc doesn't return NULL */
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len2; i++)
	{
		new[len1 + i] = s2[i];
	}
	new[len1 + i] = '\0';
	return (new);
}
