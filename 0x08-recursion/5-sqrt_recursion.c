#include "holberton.h"


/**
  *function_2 - programs things
  *Result: always returns 0
  *@a : variable
  *@b : variable
  *Return: 0 sucess
  */


int function_2(int a, int b)
{
if (a * a == b)
return (a);
if (a * a > b)
return (-1);
				return (function_2(a + 1, b));
}

/**
  *_sqrt_recursion - programs things
  *Result: always returns 0
  *@n : variable
  *Return: 0 sucess
  *
  */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
			return (function_2(1, n));
}
