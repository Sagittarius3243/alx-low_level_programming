#include "main.h"

/**
 * read_textfile - Read a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 * If the file cannot be opened or read, return 0.
 * If filename is NULL return 0.
 * If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t num_read, num_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	num_read = read(file_descriptor, buffer, letters);
	close(file_descriptor);

	if (num_read == -1)
	{
		free(buffer);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buffer, num_read);
	free(buffer);

	if (num_written == -1 || num_written != num_read)
		return (0);

	return (num_read);
}
