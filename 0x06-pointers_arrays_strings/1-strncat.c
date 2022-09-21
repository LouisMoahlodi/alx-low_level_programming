#include "main.h"

/** _strncat - Function contcantenates two strings 
 *
 * @dest: Destination pointer string
 * @src: Source pointer string
 *
 * Return 0 Always (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int i;

	len1 = strlen(dest);
	n = strlen(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	
	}
	return (dest);
	
}
