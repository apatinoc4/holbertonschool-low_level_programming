#include "holberton.h"
#include <stdlib.h>

/**
  *_strdup - programs things
  *Result: always returns 0
  *@str : variable
  *Return: 0 sucess
  */


char *_strdup(char *str)
{
	unsigned int a, b;
	char *c;

	if (str == NULL)
	{
		return (NULL);
}
for (a = 0; str[a] != '\0'; a++)
;
a++;
	c = malloc(a *sizeof(char));
		if (c == NULL)
		{
		return (NULL);
}
	for (b = 0; b < a; b++)
	{
		c[b] = str[b];
}
	return (c);
}
