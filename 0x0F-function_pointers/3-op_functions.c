#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *op_add - programs things
  *Result: always returns 0
  *@a : variable
  *@b : variable
  *Return: 0 sucess
  */

int op_add(int a, int b)
{
		return (a + b);
}

/**
  *op_sub - programs things
  *Result: always returns 0
  *@a : variable
  *@b : variable
  *Return: 0 sucess
  */

int op_sub(int a, int b)
{
		return (a - b);
}

/**
  *op_mul - programs things
  *Result: always returns 0
  *@a : variable
  *@b : variable
  *Return: 0 sucess
  */

int op_mul(int a, int b)
{
		return (a * b);
}

/**
  *op_div - programs things
  *Result: always returns 0
  *@a : variable
  *@b : variable
  *Return: 0 sucess
  */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
  *op_mod - programs things
  *Result: always returns 0
  *@a : variable
  *@b : variable
  *Return: 0 sucess
  */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
