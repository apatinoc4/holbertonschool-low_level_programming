#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  *print_strings - programs things
  *Result: always returns 0
  *@separator : variable
  *@n : variable
  *Return: 0 sucess
  */


	void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *ch;
va_list lista;

va_start(lista, n);
for (i = 0; i < n; i++)
{
ch = va_arg(lista, char *);
if (ch)
printf("%s", ch);
else
printf("(nil)");
if (i < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(lista);
}
