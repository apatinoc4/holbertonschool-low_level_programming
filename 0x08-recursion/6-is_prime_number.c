#include "holberton.h"


/**
  *_prime - programs things
  *Result: always returns 0
  *@a : variable
  *@b : variable
  *Return: 0 sucess
  */


int _prime(int a, int b)
{
if (b < 2 || b % a == 0)
return (0);
else if (a > b / 2)
return (1);
else
return (_prime(a + 1, b));
}

/**
  *is_prime_number - programs things
  *Result: always returns 0
  *@n : variable
  *Return: 0 sucess
  *
  */

int is_prime_number(int n)
{
if (n == 2)
return (1);
return (_prime(2, n));
}

