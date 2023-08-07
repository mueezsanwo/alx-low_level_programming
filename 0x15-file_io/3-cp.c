#include "main.h"

/**
* error - in case of error close all files descriptors and free buf
* @fd1: file descriptor 1 to close
* @fd2: file descriptor 2 to close
* @buf: space buffer to be free
* Return: always 0 (success)
*/
void error(int fd1, int fd2, char *buf)
{
	close(fd1);
	close(fd2);
	free(buf);
}

/**
* copy_src_to_dest - copy a string source to a string dest
* @src: string to be copy
* @dest: string where src will  be copied
* Return: -1 if src fails, -2 if dest fails
*/

int copy_src_to_dest(const char *src, const char *dest)
{
	int fd1 = 0, fd2 = 0, aux = 0;
	int write_out = 0, read_out = 1;
	char *buf;

	fd1 = open(src, O_RDONLY);
	if (fd1 == -1)
		return (-1);
	fd2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		return (-2);
	buf = (char *)malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);
	while (read_out > 0)
	{
		read_out = read(fd1, buf, 1024);
		if (read_out == -1)
		{
			error(fd1, fd2, buf);
			return (-1);
		}
		write_out = write(fd2, buf, read_out);
		if (write_out == -1)
		{
			error(fd1, fd2, buf);
			return (-2);
		}
	}
	aux = close(fd1);
	if (aux == -1)
		return (fd1);
	aux = close(fd2);
	if (aux == -1)
		return (fd2);
	free(buf);
	return (1);
}

/**
* main - copies the content of a file to another file
* @argc: count of arguments
* @argv: arguments value
* Return: a integer
*/
int main(int argc, char *argv[])
{
	int check = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	check = copy_src_to_dest(argv[1], argv[2]);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (check == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (check != 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", check);
		exit(100);
	}
	return (0);
}
