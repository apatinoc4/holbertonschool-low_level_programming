#include "holberton.h"

/**
 * * _puts - programs things
 * *Result: always returns 0
 * *@str : variable to define array length
 * *Return: 0 sucess
 * *
   */
void _puts(char *str)
{
int b;
while (str[b] != '\0')
{
_putchar (str[b]);
b++;
}
_putchar ('\n');
}
