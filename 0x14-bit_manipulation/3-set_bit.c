#include "holberton.h"
#include <stdlib.h>
/**
  *set_bit - programs things
  *Result: always returns 0
  *@n : variable
  *@index : variable
  *Return: 0 sucess
  */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
set = 1 << index;
*n = *n | set;
return (1);
}
