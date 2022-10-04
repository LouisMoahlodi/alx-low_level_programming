#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and intializes it with a specific char
 *
 * @size: Array size
 * @c: char ti initialize array with
 * 
 * Return: array to pointer: or NULL if array = 0 and/or if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
