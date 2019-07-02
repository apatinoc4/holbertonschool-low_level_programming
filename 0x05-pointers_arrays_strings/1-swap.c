#include "holberton.h"

/**
*swap_int - programs things
*Result: always returns 0
*@a : variable to swap
*@b : variable to swap
*Return: 0 sucess
*
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
