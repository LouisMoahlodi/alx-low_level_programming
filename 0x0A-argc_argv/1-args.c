#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed to it
 *
 * @argc: Counts the number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
