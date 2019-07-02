#include "holberton.h"
/**
 * *puts2 - programs things
 * *Result: always returns 0
 * *@str : variable to define array length
 * *Return: 0 sucess
 * *
   */
void puts_half(char *str)
{
int a;
int b;
int c;
b = 0;
while (*(str + b) != '\0')
b++;
c = b;
b = b / 2;
if (c % 2 != 0)
{
b++;
}
for (a = 0; a < c; a++)
{
if (a >= b)
_putchar(*(str + a));
}
_putchar('\n');
}
