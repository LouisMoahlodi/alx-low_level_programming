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
	int len1 = strlen(s1), len2 = strlen(s2);
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		new[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new[j] = s2[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}
