#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int _strlen(char *s);
/**
 * create_file - function that create a file.
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, aux = 0, res = 0;

	if (filename == NULL && *filename == '\0')
		return (-1);
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	res = _strlen(text_content);
	if (text_content == NULL || res == 0)
	{
		close(fd);
		return (0);
	}
	aux = write(fd, text_content, res);
	if (aux == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
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
