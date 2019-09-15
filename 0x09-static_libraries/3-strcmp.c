#include "holberton.h"

/**
  *_strcmp - programs things
  *Result: always returns 0
  *@s1 : variable to define array length
  *@s2 : variable to define array length
  *Return: 0 sucess
  *
  */
int _strcmp(char *s1, char *s2)
{
int a = 0;
int b = 0;
int c = 1;
while (s1[a] != '\0' && s2[a] != '\0' && c == 1)
{
b = s1[a] - s2[a];
if (b == 0)
{
a++;
}
else
{
c = 0;
}
}
return (b);
}
