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
 *append_text_to_file - function that appends text at the end of a file.
 *@filename: name of the file
 *@text_content: NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	/* File does not exist or permission issue. */
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, _strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1); /* write failure */
	}

	close(fd);

	return (1);
}
