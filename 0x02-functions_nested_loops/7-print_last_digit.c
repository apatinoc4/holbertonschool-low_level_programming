#include "holberton.h"
#include <stdlib.h>
/**
*print_last_digit - programs things
*@n : character defined
*Result: always returns 0
*Return: 0
*
 */

int print_last_digit(int n)
{
int l;
l = abs (n % 10);
_putchar (l + '0');
return (l);
}
