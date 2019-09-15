#include "holberton.h"
#include <stdlib.h>

/**
  *str_concat - programs things
  *Result: always returns 0
  *@s1 : variable
  *@s2 : variable
  *Return: 0 sucess
  */

char *str_concat(char *s1, char *s2)
{
int a, b, d;
char *c;
if (s1 == NULL)
{
a = 0;
}
else
{
for (a = 0; s1[a] != '\0'; a++)
{
;
}
}
if (s2 == NULL)
{
b = 0;
}
else
{
for (b = 0; s2[b] != '\0'; b++)
{
;
}
}
d = a + b + 1;
c = malloc(d *sizeof(char));
if (c == NULL)
{
return (NULL);
}
for (d = 0; d < a; d++)
{
c[d] = s1[d];
}
for (d = 0; d < b; d++)
{
c[d + a] = s2[d];
}
c[a + b] = '\0';
return (c);
}
