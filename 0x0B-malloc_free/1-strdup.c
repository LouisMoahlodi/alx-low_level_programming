#include "main.h"
#include <stdlib.h>

/**
 * char *_strdup - Returns pointer to newly allocated space in memory
 * also ontains a copy of the string as a parameter
 *
 * @str: A pointer string
 *
 * Return: copy of "str":
 * or "NULL" if "str" = "NULL":
 * or "NULL" if insufficient memory
 */
char *_strdup(char *str)
{
	char *x;

	int strlen;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}
	/* determining the length */
	for (strlen = 0; str[strlen] != '\0'; strlen++)
	{

	}
	/* determine size and allocate enough memory space for it */
	x = malloc(strlen * sizeof(char) + 1);

	/* check if malloc  doesn't return NULL */
	if (x == NULL)
	{
		return (NULL);
	}

	/* copy the str to the new location */
	for (count = 0; str[count] != '\0'; count++)
	{
		x[count] = str[count];
	}
	x[count] = '\0';
	return (x);
}
