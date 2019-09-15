#include "holberton.h"

/**
 * * puts2 - programs things
 * *Result: always returns 0
 * *@str : variable to define array length
 * *Return: 0 sucess
 * *
   */
void puts2(char *str)
{
int a;
char b;
for (a = 0; *(str + a) != 0; a++)
{
if (a % 2 == 0)
{
b = *(str + a);
_putchar(b);
}
}
_putchar('\n');
}
