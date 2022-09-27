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

	while (haystack[i] != '\0' || needle[j] != '\0')
	{
		if (haystack[i] != needle[j])
		{
			j++;
		}
		else
		{
			j++;
			i++;
		}
	}
	return (needle);
}
