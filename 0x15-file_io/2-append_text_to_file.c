#include "main.h"
/**
* append_text_to_file - it appends text at the end of a file
* @filename: name of the file
* @text_content: text to add at end
* Return: 1 if succes and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	size_t counter = 0;
	ssize_t write_out = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[counter])
		counter++;

	write_out = write(fd, text_content, counter);
	if (write_out == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
