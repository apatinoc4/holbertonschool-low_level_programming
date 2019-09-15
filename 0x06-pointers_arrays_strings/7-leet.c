#include "holberton.h"

/**
  *leet - programs things
  *Result: always returns 0
  *@s : variable to define array length
  *Return: 0 sucess
  *
  */
char *leet(char *s)
{
int a = 0;
int b = 0;
char c[] = "aeotlAEOTL";
char d[] = "4307143071";
while (s[a] != '\0')
{
for (b = 0 ; b <= 9; b++)
{
if (s[a] == c[b])
{
s[a] = d[b];
}
}
a++;
}
return (s);
}
