#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function prints all arguments it recieves
 *
 * @argc: Counts the number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
