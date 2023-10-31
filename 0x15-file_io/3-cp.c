#include "main.h"

/**
 *main - checks code
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, c_file_from, c_file_to;
	char buffer[BUF_SIZE];
	ssize_t read_byte, write_byte;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_to = open(argv[2], O_TRUNC | O_WRONLY | O_CREAT, 0660);
	file_from = open(argv[1], O_RDONLY);
	read_byte = read(file_from, buffer, BUF_SIZE);

	if (read_byte == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	write_byte = write(file_to, buffer, read_byte);
	if (write_byte == -1)
	{
		close(file_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c_file_from = close(file_from);
	if (c_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	c_file_to = close(file_to);
	if (c_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
		exit(100);
	}
	return (0);
}
