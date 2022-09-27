#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 *
 * @s: Double pointer that points to "char *to"
 * @to: Is a pointer that points to a string
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
