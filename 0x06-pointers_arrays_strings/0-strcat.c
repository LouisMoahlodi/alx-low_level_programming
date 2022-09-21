#include "main.h"

/**
 * _strcat - Concatenate two strings
 *
 * @dest: Destination string
 * @src: Soruce string
 *
 * Return: 0 Always (Success)
 */
char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
