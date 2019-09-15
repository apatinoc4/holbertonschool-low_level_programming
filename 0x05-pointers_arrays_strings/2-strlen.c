#include "holberton.h"

/**
  *_strlen - programs things
  *Result: always returns 0
  *@s : variable to define array length
  *Return: 0 sucess
  *
   */
int _strlen(char *s)
{
int b = 0;
while (s[b] != '\0')
b++;
return (b);
}
