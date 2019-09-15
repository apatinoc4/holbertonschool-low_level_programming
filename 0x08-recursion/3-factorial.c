#include "holberton.h"

/**
  *factorial - programs things
  *Result: always returns 0
  *@n : variable
  *Return: 0 sucess
  *
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
