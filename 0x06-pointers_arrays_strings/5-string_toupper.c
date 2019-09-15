#include "holberton.h"

/**
  *string_toupper - programs things
  *Result: always returns 0
  *@s : variable to define array length
  *Return: 0 sucess
  *
  */
char *string_toupper(char *s)
{
int a = 0;
while (s[a] != '\0')
{
if (s[a] >= 65 && s[a] <= 90)
{
}
else if (s[a] >= 97 && s[a] <= 122)
{
s[a] = s[a] - 32;
}
else
{
}
a++;
}
return (s);
}
