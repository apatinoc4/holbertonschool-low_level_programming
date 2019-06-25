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
int ht;
int mo;
int mt;

{
for (ho = 0; ho < 3; ho++)
{
for (ht = 0; ht < 4; ht++)
{
for (mo = 0; mo < 6; mo++)
{
for (mt = 0; mt < 10; mt++)
{
_putchar(ho + '0');
_putchar(ht + '0');
_putchar(':');
_putchar(mo + '0');
_putchar(mt + '0');
_putchar('\n');
}
}
}
}
}
}
