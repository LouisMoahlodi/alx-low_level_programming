#include "main.h"

/**
 * _strlen - Function that checks the lenght of a string
 *
 * @s: A character
 *
 * Return: The result of function
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
