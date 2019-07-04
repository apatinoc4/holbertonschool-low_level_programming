#include "holberton.h"

/**
  *reverse_array - programs things
  *Result: always returns 0
  *@a : variable to define array length
  *@n : variable to define array length
  *Return: 0 sucess
  *
  */
void reverse_array(int *a, int n)
{
		int b = 0;
			int c = 0;
				int d;
					int e[1000];

						for (c = 0; c < n; c++)
								{
					e[c] = a[c];
						}
							for (b = 0; b < n; b++)
									{
			  		d = n - 1 - b;
							a[b] = e[d];
									d--;
										}
}
