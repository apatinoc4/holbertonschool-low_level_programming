#include "holberton.h"

/**
  *_strcat - programs things
  *Result: always returns 0
  *@dest : variable to define array length
  *@src : variable to define array length
  *Return: 0 sucess
  *
  */
char *_strcat(char *dest, char *src)
{
int a;
int b;
for (a = 0; dest[a] != '\0'; a++)
{}
for (b = 0; src[b] != '\0'; b++)
{
dest[a + b] = src[b];
}
return (dest);
}
