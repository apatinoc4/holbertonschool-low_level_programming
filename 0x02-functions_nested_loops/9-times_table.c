#include "holberton.h"

/**
*times_table - programs things
*Result: always returns 0
*Return: no value
*
 */

void times_table(void)
{
int a;
int b;
int one;
int two;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
one = (a * b) / 10;
two = (a * b) % 10;
if (one == 0)
{
if (b != 0)
{
_putchar(' ');
}
_putchar(two + '0');
}
else
{
_putchar(one + '0');
_putchar(two + '0');
}
if (b != 9)
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}

