#include "function_pointers.h"

/**
  *int_index - programs things
  *Result: always returns 0
  *@array : variable
  *@size : variable
  *@cmp : variable
  *Return: 0 sucess
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int a, b;

if (size > 0 && array && cmp)
{
for (a = 0; a < size; a++)
{
b = cmp(array[a]);
if (b)
break;
}
if (a < size)
return (a);
}
return (-1);
}
