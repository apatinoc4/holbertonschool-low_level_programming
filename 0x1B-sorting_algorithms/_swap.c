#include "sort.h"

/**
 * swap - swaps two ints
 * @a: 1st int to swap
 * @b: 2nd int to swap
 */
void _swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}