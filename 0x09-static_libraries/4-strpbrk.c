#include "holberton.h"

/**
  *_strpbrk - programs things
  *Result: always returns 0
  *@accept : variable
  *@s : variable
  *Return: 0 sucess
  *
  */
char *_strpbrk(char *s, char *accept)
{
int a, b, c;
for (a = 0; s[a] != '\0'; a++)
{
c = 0;
for (b = 0; accept[b]; b++)
{
if (s[a] == accept[b])
{
c = 1;
}
}
if (c == 1)
{
return (s + a);
}
}
return ('\0');
}
