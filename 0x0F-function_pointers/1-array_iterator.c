#include "function_pointers.h"

/**
  *array_iterator - programs things
  *Result: always returns 0
  *@array : variable
  *@size : variable
  *@action : variable
  *Return: 0 sucess
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;

if (array && action)
{
for (a = 0; a < size; a++)
{
action(array[a]);
}
}
}
