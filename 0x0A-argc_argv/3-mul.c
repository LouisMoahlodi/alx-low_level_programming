#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function multiplies 2 numbers passed to main
 *
 * @argc: Counts the number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 if success: or 1 & print "Error"
 */
int main(int argc, char *argv[])
{
	(void)argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
