#include "holberton.h"

/**
*print_line - programs things
*Result: always returns 0
*@n : value
*Return: value depending on function
*
 */

void print_line(int n)
{
int a;
if (n <= 0)
_putchar ('\n');
else
{
for (a = 1; a <= n; a++)
{
_putchar ('_');
}
_putchar ('\n');
}
}
