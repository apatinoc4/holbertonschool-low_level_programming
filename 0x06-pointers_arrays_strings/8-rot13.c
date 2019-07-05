#include "holberton.h"

/**
  *rot13 - programs things
  *Result: always returns 0
  *@s : variable to define array length
  *Return: 0 sucess
  *
  */
char *rot13(char *s)
{
char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int a = 0;
int b = 0;
while (s[a] != '\0')
{
for (b = 0; b <= 55; b++)
{
if (s[a] == in[b])
{
s[a] = out[b];
break;
}
}
a++;
}
return (s);
}
