#include <stdio.h>

/**
 * main - Function prints out of file it was compiled from
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
