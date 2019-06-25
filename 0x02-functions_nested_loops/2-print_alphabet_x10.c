#include "holberton.h"
/**
*print_alphabet_x10 - programs things
*Result: always returns 0
*Return: 0
*
 */

void print_alphabet_x10(void)
{
int j = 0;
char g;
while (j < 10)
{
for (g = 'a'; g <= 'z'; g++)
_putchar(g);
_putchar('\n');
j++;
}
}
