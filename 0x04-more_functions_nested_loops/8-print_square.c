#include "holberton.h"

/**
*print_square - programs things
*Result: always returns 0
*@size : value
*Return: value depending on function
*
 */

void print_square(int size)
{
int a;
int b;

if (size <= 0)
_putchar('\n');
else
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
