#include <stdio.h>

/**
 * main - Prints its name, followed by a new line.
 *
 * @argc: Counts the number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char **argv)
{
	(void)argc; /*basically skipping the agrument*/

	printf("%s\n", argv[0]);
	return (0);
}
