#include "main.h"

/**
 * append_text_to_file - Function appends texts at the end of a file
 *
 * @filename: Pointer to the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return: 1 Success: or -1 if failure;
 * or filename is "NULL";
 * or if file doesn't exist;
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == 1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		rwr = write(fd, text_content, len);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
