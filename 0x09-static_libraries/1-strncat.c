#include "holberton.h"

/**
  *_strncat - programs things
  *Result: always returns 0
  *@dest : variable to define array length
  *@src : variable to define array length
  *@n : variable to define array length
  *Return: 0 sucess
  *
  */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
for (a = 0; dest[a] != '\0'; a++)
{}
for (b = 0; src[b] != '\0' && b < n; b++)
{
dest[a + b] = src[b];
}
return (dest);
}
