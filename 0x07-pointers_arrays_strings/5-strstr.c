#include "holberton.h"

/**
  *_strstr - programs things
  *Result: always returns 0
  *@haystack : variable
  *@needle : variable
  *Return: 0 sucess
  *
  */

char *_strstr(char *haystack, char *needle)
{
int a, b, c;
a = 0;
while (haystack[a] != '\0')
{
b = 0;
c = a;
while (haystack[a] == needle[b] && haystack[a] != '\0'
&& needle[b] != '\0')
{
a++;
b++;
}
if (needle[b] == '\0')
return (haystack + c);
a = c + 1;
}
return ('\0');
}
