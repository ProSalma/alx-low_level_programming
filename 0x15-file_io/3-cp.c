#include "main.h"

/**
 * read_file - Reads the content of a file.
 * @filename: Name of the file to read.
 * @buf: Buffer to store the file content.
 *
 * Return: Number of bytes read, or -1 on failure.
 */
ssize_t read_file(const char *filename, char *buf)
{
	int fd;
	ssize_t bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		return (-1);
	}

	bytes_read = read(fd, buf, BUFSIZ);
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		close(fd);
		return (-1);
	}

	close(fd);
	return (bytes_read);
}

/**
 * write_file - Writes the content to a file.
 * @filename: Name of the file to write.
 * @buf: Buffer containing the content to write.
 * @bytes: Number of bytes to write.
 *
 * Return: 1 on success, -1 on failure.
 */
int write_file(const char *filename, char *buf, ssize_t bytes)
{
	int fd, bytes_written;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		return (-1);
	}

	bytes_written = write(fd, buf, bytes);
	if (bytes_written != bytes)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	char buf[BUFSIZ];
	ssize_t bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	bytes_read = read_file(argv[1], buf);
	if (bytes_read == -1)
		return (98);

	if (write_file(argv[2], buf, bytes_read) == -1)
		return (99);

	return (0);
}
