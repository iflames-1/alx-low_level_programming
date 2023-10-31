#include "main.h"

/**
 *read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 *@filename: filename
 *@letters: the number of letters it should read and print
 *Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_byte, write_byte;
	char *buffer;

	if (filename == NULL)
		exit(17);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		exit(23);
	}

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		exit(30);
	}

	read_byte = read(fd, buffer, letters);
	if (read_byte == -1)
	{
		free(buffer);
		close(fd);
		exit(38);
	}

	write_byte = write(STDOUT_FILENO, buffer, read_byte);
	if (write_byte == -1 || write_byte != read_byte)
	{
		free(buffer);
		close(fd);
		exit(46);
	}

	free(buffer);
	close(fd);
	return (write_byte);
}
