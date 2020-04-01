#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int _strlen(char *s);
void fill_buffer(char *str, unsigned int size);
/**
 * main - program that copies the content of a file to another file.
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int first_fd, second_fd, aux = 0, len = 0;
	char *buffer = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	first_fd = open(argv[1], O_RDONLY);
	if (first_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	second_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (second_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(first_fd);
		exit(99);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
		exit(1);
	fill_buffer(buffer, 1024);
	aux = read(first_fd, buffer, 1024);
	if (aux == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	len = _strlen(buffer);
	aux = write(second_fd, buffer, len);
	if (aux == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(first_fd);
		exit(99);
	}
	while (buffer[1023] != '\0')
	{
		fill_buffer(buffer, 1024);
		aux = read(first_fd, buffer, 1024);
		if (aux == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			close(first_fd);
			close(second_fd);
			exit(98);
		}
		len = _strlen(buffer);
		aux = write(second_fd, buffer, len);
		if (aux == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(first_fd);
			exit(99);
		}
	}
	aux = close(first_fd);
	if (aux == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", first_fd);
		free(buffer);
		exit(100);
	}
	aux = close(second_fd);
	if (aux == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", second_fd);
		free(buffer);
		exit(100);
	}
	free(buffer);
	return (0);
}

/**
 *_strlen - calculate the length of a string
 *@s: char pointer
 *
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	for (a = 0; *(s + a) != 0; a++)
	{
	}
	return (a);
}
/**
 * fill_buffer - functions that fills the string with char '\0'
 * @str: string to fill
 * @size: size of the string
 *
 */
void fill_buffer(char *str, unsigned int size)
{
	unsigned int i = 0;

	for (; i < size; i++)
	{
		str[i] = '\0';
	}
}
