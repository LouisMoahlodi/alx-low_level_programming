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
	unsigned int i, j, k, limit;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	new = malloc(sizeof(char) * (i + j + 1));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		new[k] = s1[k];

	limit = j;
	for (j = 0; j<= limit; k++, j++)
		new[k] = s2[j];

	return (new);
}
