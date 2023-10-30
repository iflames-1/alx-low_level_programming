#include "main.h"

void error_message(int code, const char *format, ...)
{
	va_list args;
	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_message(97, "Usage: cp file_from file_to\n");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_message(97, "Usage: cp file_from file_to\n");

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0666);
	if (fd_to == -1)
		error_message(99, "Error: Can't write to file %s\n", argv[2]);

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_message(99, "Error: Can't write to file %s\n", argv[2]);
	}

	if (bytes_read == -1)
		error_message(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		error_message(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_message(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}