#include <stdio.h>
#include <string.h>
/**
 * main - Print the alphabet in lowercase and then in uppercase using putchar
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
	for (ab = 'A'; ab <= 'Z'; ab++)
	{
		putchar(ab);
	}
	putchar ('\n');
	return (0);
}
