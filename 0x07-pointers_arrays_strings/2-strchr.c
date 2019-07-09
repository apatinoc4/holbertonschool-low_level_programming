#include "holberton.h"

/**
  *_strchr - programs things
  *Result: always returns 0
  *@c : variable
  *@s : variable
  *Return: 0 sucess
  *
  */
char *_strchr(char *s, char c)
{
while (*s!= '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
else
{
return ('\0');
}
}
