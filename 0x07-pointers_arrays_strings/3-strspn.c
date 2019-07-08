#include "holberton.h"

/**
  *_strspn - programs things
  *Result: always returns 0
  *@accept : variable
  *@s : variable
  *Return: 0 sucess
  *
  */
unsigned int _strspn(char *s, char *accept)
{
int a, b, c;
unsigned int d;

for (a = 0; s[a] != '\0'; a++)
{
c = 0;
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
{
c = 1;
}
}
if (c == 0)
{
break;
}
d++;
}
return (d);
}
