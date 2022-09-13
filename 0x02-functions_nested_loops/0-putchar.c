#include "main.h"

/**
 * main - Print "_putchar" without standard header file
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char main[] = "_putchar";
	int a = 0;

	while (main[a] != '\0')
	{
		_putchar(main[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
