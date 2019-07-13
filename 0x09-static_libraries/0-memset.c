#include "holberton.h"

/**
  *_memset - programs things
  *Result: always returns 0
  *@s : variable
  *@b : variable
  *@n : variable
  *Return: 0 sucess
  *
  */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
