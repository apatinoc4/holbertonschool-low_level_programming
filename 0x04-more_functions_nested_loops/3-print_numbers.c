#include "holberton.h"

/**
*print_numbers - programs things
*Result: always returns 0
*Return: value depending on function
*
 */

void print_numbers(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
_putchar (a);
}
_putchar ('\n');
}
