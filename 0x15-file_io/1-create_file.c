#include "main.h"

/**
 * create_file - Function creates a file
 *
 * @filename: A pointer to the name of file to be created
 * @text_content: A pointer to a string to write in the file
 *
 * Return: 1 Success: or -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	rwr = write(fd, text_content, len);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	if (fd == -1 || rwr == 1)
		return (-1);

	close(fd);

	return (1);
}
