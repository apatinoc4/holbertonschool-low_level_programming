#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 - programs things
*@n: parameter
*Result: always returns 0
*Return: no value
*
 */

void print_to_98(int n)
{
int a;
int b;
if (n > 98)
{
for (a = n; a >= 98; a--)
{
if (a == 98)
{
printf("%d", a);
}
else
{
printf("%d, ", a);
}
}
}
if (n == 98)
{
printf("%d", 98);
}
if (n < 98)
{
for (b = n; b <= 98; b++)
{
if (b == 98)
{
printf("%d", b);
}
else
{
printf("%d, ", b);
}
}
}
printf("\n");
}
