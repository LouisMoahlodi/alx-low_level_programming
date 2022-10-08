#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add 2 positive numbers and print the result
 *
 * @argc: Counts all the arguments
 * @argv: An array of arguments
 *
 * Return: 0 if successful: or 1 & print "Error"
 */
int main(int argc, char *argv[])
{
	int total;
	int i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
