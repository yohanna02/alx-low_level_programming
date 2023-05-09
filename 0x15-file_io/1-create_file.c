#include "main.h"
#include <fcntl.h>

/**
 * flush_buffer - print the buffer to stdout
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * Return: void
 */
void flush_buffer(int* file, char *buffer, int *buffer_index)
{
	write(*file, buffer, *buffer_index);
	*buffer_index = 0;
}

/**
 * add_to_buffer - add a string to the buffer
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * @c: the character to append to the buffer
 * Return: number of characters added to the buffer
 */
int add_to_buffer(int *file, char *buffer, int *buffer_index, char c)
{
	if (*buffer_index == BUFFER_SIZE)
	{
		flush_buffer(file, buffer, buffer_index);
	}
	buffer[(*buffer_index)] = c;
	(*buffer_index)++;

	return (1);
}

/**
 * create_file - Create a file
 * @filename: Filename
 * @text_content: Text content to write
 * Return: Success 1, Error -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, buffer_index = 0, i = 0;
	char buffer[BUFFER_SIZE];

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[i] != '\0')
	{
		add_to_buffer(&file, buffer, &buffer_index, text_content[i]);
		i++;
	}

	flush_buffer(&file, buffer, &buffer_index);
	close(file);
	return (1);
}
