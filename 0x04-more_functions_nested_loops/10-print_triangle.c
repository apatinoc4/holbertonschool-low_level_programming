#include "holberton.h"

/**
*print_triangle - programs things
*Result: always returns 0
*@size : variable for triangle
*Return: 0 sucess
*
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
c = size - a - 1;
if (b < c)
_putchar(' ');
else
_putchar(35);
}
_putchar('\n');
}
}
}
