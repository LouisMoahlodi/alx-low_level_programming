#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: Destination of pointer string
 * @src: Source of pointer string
 * @n: Is an integer
 *
 * Return: 0 Always (Succes)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
