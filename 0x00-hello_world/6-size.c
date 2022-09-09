#include <stdio.h>

/**
 * main - Using the sizeof function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int typeofint;
	char typeofchar;
	float typeoffloat;
	long typeoflong;
	long long typeoflonglong;

	printf("Size of a char: %zu byte(s)\n", sizeof(typeofchar));
	printf("Size of an int: %zu byte(s)\n", sizeof(typeofint));
	printf("Size of a long int: %zu byte(s)\n", sizeof(typeoflong));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(typeoflonglong));
	printf("Size of a float: %zu byte(s)\n"ii, sizeof(typeoffloat));
	return (0);
}
