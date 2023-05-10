#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * close_file - function to close a file
 * @file: file descriptor
 * Return: void
 */
void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * can_write_file - check whether the file is writeable
 * @file: the file to check
 * @filename: the filename
 * @n: number of parameters passed
 * Return: void
 */
void can_write_file(int file, char *filename, int n, ...)
{
	va_list arg_list;
	int i = 0;
	int file_to_close;

	va_start(arg_list, n);
	if (file == -1)
	{
		for (i = 0; i < n; i++)
		{
			file_to_close = va_arg(arg_list, int);
			close_file(file_to_close);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		va_end(arg_list);
		exit(99);
	}
}

/**
 * can_read_file - check whether the file is readable
 * @file: the file to check
 * @filename: the filename
 * @n: number of parameters passed
 * Return: void
 */
void can_read_file(int file, char *filename, int n, ...)
{
	va_list arg_list;
	int i = 0;
	int file_to_close;

	va_start(arg_list, n);
	if (file == -1)
	{
		for (i = 0; i < n; i++)
		{
			file_to_close = va_arg(arg_list, int);
			close_file(file_to_close);
		}
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		va_end(arg_list);
		exit(98);
	}
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on Success
 */
int main(int argc, char **argv)
{
	int file_to, file_from, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	can_read_file(file_from, argv[1], 0);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	can_write_file(file_to, argv[2], 1, file_from);
	while (1)
	{
		bytes_read = read(file_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			close_file(file_from);
			close_file(file_to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (bytes_read == 0)
			break;

		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close_file(file_from);
			close_file(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_file(file_from);
	close_file(file_to);
	return (0);
}
