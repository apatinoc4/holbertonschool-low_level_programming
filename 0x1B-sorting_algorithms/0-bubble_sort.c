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
 * bubble_sort - sort in ascending order
 * @array: array
 * @size: array length
 * Return:
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int a;
	_Bool sort = true;

	if (!array || size < 2)
		return;

	while (sort)
	{
		sort = false;
		for (a = 0; a < size - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				swap_int(&array[a], &array[a + 1]);
				print_array(array, size);
				sort = true;
			}
		}
	}
}

