#include "function_pointers.h"

/**
 * *print_name - programs things
 * *Result: always returns 0
 * *@name : variable
 * *@f : variable
 * *Return: 0 sucess
   */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
