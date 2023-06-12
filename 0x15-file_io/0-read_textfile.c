#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: name of file to be read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * 0 if file name cannot be opened/read, file is NULL or
 * write function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_open, rd_let, wr_let;
	char *sz_let;

	if (filename == NULL)
		return (0);

	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
		return (0);

	sz_let = malloc(sizeof(char) * letters);
	if (sz_let == NULL)
	{
		close(file_open);
		return (0);
	}
	rd_let = read(file_open, sz_let, letters);
	wr_let = write(STDOUT_FILENO, sz_let, rd_let);

	free(sz_let);
	close(file_open);
	return (wr_let);
}
