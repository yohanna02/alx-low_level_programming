#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

int main(int argc, char **argv)
{
	int file_to, file_from, bytes_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		if (close(file_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (1)
	{
		bytes_read = read(file_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			if (close(file_from))
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
				exit(100);
			}
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (bytes_read == 0)
			break;
		
		write(file_to, buffer, bytes_read);
	}
	if (close(file_from))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
