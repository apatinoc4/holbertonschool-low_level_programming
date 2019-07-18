#include "holberton.h"
#include <stdlib.h>

/**
  *malloc_checked - programs things
  *Result: always returns 0
  *@b : variable
  *Return: 0 sucess
  */

void *malloc_checked(unsigned int b)
{
void *a;
a = malloc(b);
if (a == NULL)
exit(98);
return (a);
}
