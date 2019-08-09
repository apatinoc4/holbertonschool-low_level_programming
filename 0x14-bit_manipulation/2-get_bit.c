#include "holberton.h"
#include <stdlib.h>
/**
  *get_bit - programs things
  *Result: always returns 0
  *@n : variable
  *@index : variable
  *Return: 0 sucess
  */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
divisor = 1 << index;
check = n & divisor;
	if (check == divisor)
	{
		return (1);
	}
return (0);
}
