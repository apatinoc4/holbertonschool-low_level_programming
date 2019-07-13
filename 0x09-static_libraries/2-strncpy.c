#include "holberton.h"

/**
  *_strncpy - programs things
  *Result: always returns 0
  *@dest : variable to define array length
  *@src : variable to define array length
  *@n : variable to define array length
  *Return: 0 sucess
  *
  */
char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; src[a] != '\0' && a < n; a++)
{
dest[a] = src[a];
}
for ( ; a < n; a++)
{
dest[a] = '\0';
}
return (dest);
}
