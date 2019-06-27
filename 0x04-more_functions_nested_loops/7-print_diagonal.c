#include "holberton.h"

/**
*print_diagonal - programs things
*Result: always returns 0
*@n : value
*Return: value depending on function
*
 */

void print_diagonal(int n)
{
int a;
int b;
if (n <= 0)
_putchar ('\n');
else
{
for (b = 1; b <= n; b++)
{
for (a = 2; a <= b; a++)
{
_putchar (' ');
}
_putchar (92);
_putchar ('\n');
}
}
}
