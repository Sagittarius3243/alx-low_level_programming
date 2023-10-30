#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * main - Copies the content of a file to another file
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: 0 on success, exit with code 97 to 100 on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;
	char buf[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	do {
		r = read(fd_from, buf, BUF_SIZE);
		if (r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}

		w = write(fd_to, buf, r);
		if (w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	} while (r > 0);

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
