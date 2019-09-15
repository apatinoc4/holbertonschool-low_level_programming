#include "holberton.h"

/**
*jack_bauer - programs things
*Result: always returns 0
*Return: no value
*
 */

void jack_bauer(void)
{
int ho;
int mt;


for (ho = 0; ho <= 23; ++ho)
{
for (mt = 0; mt <= 59; mt++)
{
_putchar(ho / 10 + '0');
_putchar(ho % 10 + '0');
_putchar(':');
_putchar(mt / 10 + '0');
_putchar(mt % 10 + '0');
_putchar('\n');
}
}
}
