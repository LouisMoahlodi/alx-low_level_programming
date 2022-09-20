#include "main.h"
#include <stdio.h>

/**
 * *_strcpy -  function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: destination char
 * @src: source char
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\n')
			break;
		count++;
	}
	return (dest);
}
