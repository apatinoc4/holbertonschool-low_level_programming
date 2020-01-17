#include "search_algos.h"
/**
 * binary_search - run the binary search function
 * @array: array
 * @size: size of array
 * @value: value 
 *
 * Return: value, or -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (search(array, 0, size - 1, value));
}

/**
 * search - search recursively using binary search
 * @array: array to search
 * @start: start
 * @end: end
 * @value: value to search 
 * Return: value or -1
 */

int search(int *array, size_t start, size_t end, int value)
{
	size_t mid, i = start;

	printf("Searching in array: ");
	while (i <= end)
	{
		if (i == start)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
		i++;
	}
	printf("\n");
	if (start == end)
	{
		if (value == array[start])
			return (start);
		else
			return (-1);
	}
	mid = start + (end - start) / 2;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (search(array, start, mid - 1, value));
	if (array[mid] < value)
		return (search(array, mid + 1, end, value));
	return (-1);

}
