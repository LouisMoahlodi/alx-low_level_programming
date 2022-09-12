#include <stdio.h>

/**
 * main -  Print the alphabet in lowercase using putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	putchar ('\n');
	return (0);
}
