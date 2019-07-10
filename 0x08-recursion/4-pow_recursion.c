#include "holberton.h"

/**
  *_pow_recursion - programs things
  *Result: always returns 0
  *@x : variable
  *@y : variable
  *Return: 0 sucess
  *
  */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
