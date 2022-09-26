#include "main.h"

/**
 * _memcpy -  Function that copies memory area.
 *
 * @dest: Destiation pointer to memory area
 * @src: Source pointer to memory
 * @n: Number space to be filled
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
