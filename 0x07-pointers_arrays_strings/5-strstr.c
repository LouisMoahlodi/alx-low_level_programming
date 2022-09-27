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
	int j = 0;

	while (haystack[j] != '\0' && needle[i] != '\0')
	{
		if (needle[i] != haystack[j])
		{
			j++;
			i = 0;
		}
		else
		{
			j++;
			i++;
		}
	}
	if (needle[i] == '\0')
		return (needle);
	else
		return (NULL);
}
