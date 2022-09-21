#include "main.h"

/**
 * _strcat - Concatenate two strings
 *
 * @dest: Destination: char variable
 * @src: Soruce: char varible
 *
 * Return: 0 Always (Success)
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
