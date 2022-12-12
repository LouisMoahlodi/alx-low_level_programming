#include <stdio.h>

/**
 * main - Print the alphabet in lowercase except for q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		if ((ab != 'e') && (ab != 'q'))
		putchar(ab);
	}
	putchar ('\n');
	return (0);
}
