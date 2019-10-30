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



/**
 * selection_sort - sorts int array using selection alorithm
 * @array: array to sort
 * @size: arrays length
 */
void selection_sort(int *array, size_t size)
{
    /* lesser value as less */
	register unsigned int a, b, less;

	if (!array)
		return;
	for (a = 0; a < size; a++)
	{
		less = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[less] > array[b])
			{
				less = b;
			}
		}
		if (a != less)
		{
			swap_int(&array[a], &array[less]);
			print_array(array, size);
		}
	}
}
