#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file
 * @filename: filename to read
 * @letters: number of bytes to read
 * Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int source_file;
	char *buff;
	ssize_t bytes_read;
	size_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	source_file = open(filename, O_RDONLY);
	if (source_file == -1)
	{
		return (0);
	}

	buff = malloc(letters);
	if (buff == NULL)
	{
		return (0);
	}

	bytes_read = read(source_file, buff, letters);
	if (bytes_read == -1)
	{
		free(buff);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	free(buff);

	return (bytes_written);
}
