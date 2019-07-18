#include "holberton.h"
#include <stdlib.h>

/**
  *array_range - programs things
  *Result: always returns 0
  *@max : variable
  *@min : variable
  *Return: 0 sucess
  */

int *array_range(int min, int max)
{
int a, b;
int *c;
if (min > max)
return (NULL);
b = max - min + 1;
c = malloc(sizeof(int) * b);
if (c == NULL)
return (NULL);
for (a = 0; a < b; a++, min++)
{
c[a] = min;
}
return (c);
}
