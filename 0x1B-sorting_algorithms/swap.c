#include "sort.h"

/**
 * swap_int - swaps two ints
 * @a: 1st int to swap
 * @b: 2nd int to swap
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
