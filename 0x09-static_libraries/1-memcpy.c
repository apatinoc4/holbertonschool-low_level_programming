#include "holberton.h"

/**
  *_memcpy - programs things
  *Result: always returns 0
  *@src : variable
  *@dest : variable
  *@n : variable
  *Return: 0 sucess
  *
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
