#include <stdio.h>

/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ab;

	for (ab = 'z'; ab >= 'a'; ab--)
	{
		putchar(ab);
	}
	putchar ('\n');
	return (0);
}
