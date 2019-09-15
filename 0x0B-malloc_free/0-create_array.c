#include "holberton.h"
#include <stdlib.h>


/**
  *create_array - programs things
  *Result: always returns 0
  *@size : variable
  *@c : variable
  *Return: 0 sucess
  */


char *create_array(unsigned int size, char c)
{
		unsigned int a;
			char *b;

				if (size == 0)
						{
				return (NULL);
					}

					b = malloc(size * sizeof(char));

if (b == NULL)
{
return (NULL);
}
for (a = 0; a < size; a++)
{
b[a] = c;
}
return (b);
}
