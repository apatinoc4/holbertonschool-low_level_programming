#include "holberton.h"

/**
*_isupper - programs things
*Result: always returns 0
*@c : character determined by function
*Return: value depending on function
*
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
