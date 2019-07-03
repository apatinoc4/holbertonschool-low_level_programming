#include "holberton.h"

/**
  * print_array - programs things
  *Result: always returns 0
  *@a : variable to define array length
  *@n : variable to define array length
  *Return: 0 sucess
  *
  */
void print_array(int *a, int n)
{
int c;
for (c = 0; c < n; c++)
{
	if (c == (n - 1))
		printf("%d", *(a + c));
	else
		printf("%d, ", *(a + c));
}
	printf("\n");
}
