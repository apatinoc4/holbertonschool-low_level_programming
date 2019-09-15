#include "holberton.h"

/**
 * print_rev - programs things
 * *Result: always returns 0
 * *@s : variable to define array length
 * *Return: 0 sucess
 * *
   */
void print_rev(char *s)
{
	int a;
	int b;
while (s[a] != '\0')
{
a++;
}
for (b = a - 1; b >= 0; b--)
{
_putchar(s[b]);
}
_putchar ('\n');
}
