#include "holberton.h"

/**
*_isdigit - programs things
*Result: always returns 0
*@c : character determined by function
*Return: value depending on function
*
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
