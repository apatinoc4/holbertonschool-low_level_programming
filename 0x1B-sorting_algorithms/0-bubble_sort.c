#include "sort.h"

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

