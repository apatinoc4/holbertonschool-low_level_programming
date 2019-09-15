#include "holberton.h"

/**
  *cap_string - programs things
  *Result: always returns 0
  *@s : variable to define array length
  *Return: 0 sucess
  *
  */
char *cap_string(char *s)
{
int a = 0;
while (s[a] != '\0')
{
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
if ((s[a] >= 35 && s[a] <= 44) || (s[a] == 59) || s[a] == 46)
{
if (s[a + 1] >= 97 && s[a + 1] <= 122)
{
s[a + 1] = s[a + 1] - 32;
}
}
if (s[a] == 123 || s[a] == 125 || s[a] == '\n')
{
if (s[a + 1] >= 97 && s[a + 1] <= 122)
{
s[a + 1] = s[a + 1] - 32;
}
}
if (s[a] == '\t' || s[a] == 32 || s[a] == 33)
{
if (s[a + 1] >= 97 && s[a + 1] <= 122)
{
s[a + 1] = s[a + 1] - 32;
}
}
a++;
}
return (s);
}
