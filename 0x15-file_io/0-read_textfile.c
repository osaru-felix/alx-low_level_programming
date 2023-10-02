#include "main.h"

/**
 * read_textfile - function reads a text file and
 * prints it to the POSIX std-output.
 * @filename: file to open.
 * @letters: number of letters to be read and printed.
 * Return: number of letters it could read and print, or 0 if:
 * - filename is NULL.
 * - file can not be opened or read.
 * - write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = -1;
	ssize_t my_output = 0;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	my_output = read(file_descriptor, buffer, letters);
	if (my_output < 0)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	my_output = write(STDOUT_FILENO, buffer, my_output);
	free(buffer);
	close(file_descriptor);
	if (my_output < 0)
		return (0);
	return (my_output);
}
