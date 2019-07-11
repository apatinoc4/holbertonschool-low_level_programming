#include "holberton.h"


/**
  *_strlen - programs things
  *Result: always returns 0
  *@str : variable
  *Return: 0 sucess
  */


int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}



/**
  *_palindrome - programs things
  *Result: always returns 0
  *@a : variable
  *@b : variable
  *@c : variable
  *Return: 0 sucess
  *
  */

int _palindrome(int a, int b, char *c)
{
if (a >= b)
return (1);
else if (c[a] != c[b])
return (0);
else
return (_palindrome(a + 1, b - 1, c));
}


/**
  *is_palindrome - programs things
  *Result: always returns 0
  *@s : variable
  *Return: 0 sucess
  */

int is_palindrome(char *s)
{
int d;

d = _strlen(s) - 1;
return (_palindrome(0, d, s));
}
