#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all - programs things
  *Result: always returns 0
  *@n : variable
  *Return: 0 sucess
  */


	int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int a;
va_list lista;

va_start(lista, n);
for (a = 0; a < n; a++)
{
sum = sum + va_arg(lista, int);
}
va_end(lista);
return (sum);
}
