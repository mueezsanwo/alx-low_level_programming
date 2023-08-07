#include "main.h"
/**
 * read_textfile - it read a text file and print it to the POSIX standard output
 * @filename: name of the new file
 * @letters: number of letter we want
 * Return: number of letters that could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buf = NULL;
	ssize_t read_out = 0, write_out = 0;

	if (filename == NULL)
		return (0);
	buf = malloc(letters * sizeof(char) + 1);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	read_out = read(fd, buf, letters);
	if (read_out == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	write_out = write(STDOUT_FILENO, buf, read_out);
	if (write_out == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (write_out);
}
