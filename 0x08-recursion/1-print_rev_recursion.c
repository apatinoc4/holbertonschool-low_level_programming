#include "holberton.h"

/**
 * *_print_rev_recursion - programs things
 * *Result: always returns 0
 * *@s : variable
 * *Return: 0 sucess
 * *
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
