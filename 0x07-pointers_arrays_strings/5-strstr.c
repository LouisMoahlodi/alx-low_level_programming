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
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int found = 1;

		for (j = 0; needle[i] != '\0'; j++)
		{
			if (! haystack[i + j] || haystack[i + i] != needle[j])
			{
				found = 0;
				break;
			}
		}
		if (found)
		{
			return &haystack[i];
		}
	}
	return (NULL);
}
