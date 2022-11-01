#include "main.h"

/**
 * read_textfile - read a text file and prints the letters
 *
 * @filename: filename
 * @letters: number of letters printed
 *
 * Return: number of letter printed: or 0 if failure
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, bug, letter);
	nwr = write(STDOUT_FILENO, BUG, NRD);

	close(fd);
	free(buf);

	return (nwr);
}
