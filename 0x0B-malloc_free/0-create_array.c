#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of chars and intializes it with a specific char
 *
 * @size: Array size
 * @c: char ti initialize array with
 *
 * Return: array to pointer: or NULL if array = 0: and/or if fail
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

	/* Allocating enough space for all array members */
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	/* Put a char c in each of the memory loactions */
	for (i = 0; i < size; i++)
	{
		/* assign the char to the specific memory location */
		array[i] = c;
	}
	return (array);
}
//added this//
