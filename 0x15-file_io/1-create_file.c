#include "holberton.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
  *strlen - programs things
  *Result: always returns 0
  *@str : variable
  *Return: 0 sucess
  */

size_t strlen(char *str)
{
size_t i;
	for (i = 0; str[i]; i++)
	;
return (i);
}

/**
  *create_file - programs things
  *Result: always returns 0
  *@filename : variable
  *@text_content : variable
  *Return: 0 sucess
  */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		len = write(fd, text_content, strlen(text_content));
	}
close(fd);
	if (len == -1)
	{
		return (-1);
	}
return (1);
}
