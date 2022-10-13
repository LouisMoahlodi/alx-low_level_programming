#include "function_pointers.h"

/**
 * print_name - Function prints a name from function pointer
 *
 * @name: char string
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
