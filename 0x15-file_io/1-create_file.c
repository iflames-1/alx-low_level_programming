#include "main.h"

/**
 *_strlen - calculates the length of a string
 *@s: pointer to string
 *Return: string length
 */
size_t _strlen(const char *s)
{
	size_t i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 *create_file - function that creates a file.
 *@filename: the name of the file to create
 *@text_content: a NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_byte;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	write_byte = write(fd, text_content, _strlen(text_content));
	if (write_byte == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
