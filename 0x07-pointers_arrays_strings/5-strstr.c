#include "main.h"

/**
 * _strstr - Fucntion locates a substring, the first occurrence int the string
 *
 * @haystack: Pointer string
 * @needle: substring to be located
 *
 * Return: Located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int y = 0;

	while (haystack[y] != '\0' && needle[i] != '\0')
	{
		if (needle[i] != haystack[y])
		{
			y++;
			i = 0;
		}
		else
		{
			y++;
			i++;
		}
	}
	if (haystack[y] == '\0')
		return (needle);
	else
		return (NULL);
}
