#include "holberton.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
  *read_textfile - programs things
  *Result: always returns 0
  *@filename : variable
  *@letters : variable
  *Return: 0 sucess
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t lenread, lenwrite;

	if (filename == NULL)
	{
		return (0);
	}

fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		return (0);
	}

buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

lenread = read(fd, buffer, letters);
close(fd);
	if (lenread == -1)
	{
		free(buffer);
		return (0);
	}

lenwrite = write(STDIN_FILENO, buffer, letters);
free(buffer);

	if (lenwrite != lenread)
	{
		return (0);
	}
return (lenwrite);
}
