#include "search_algos.h"
/**
 * linear_search - searches for value in array of integers using Linear search
 * @size: number of elements in array
 * @array: arrays
 * @value: value to search for
 * Return: index or -1
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
