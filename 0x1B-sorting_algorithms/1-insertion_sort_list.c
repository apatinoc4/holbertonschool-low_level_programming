#include "sort.h"

/**
 * insertion_sort_list - sorts linked list with insertion
 * @list: double pointer
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *first = NULL;
	listint_t *second = NULL, *third = NULL, *fourth = NULL;

	if (!list || !(*list) || len_list(*list) < 2)
		return;

	current = *list;

	while (current)
	{
		if (current->prev && current->n < current->prev->n)
		{
			first = current->prev->prev;
			second = current->prev;
			third = current;
			fourth = current->next;

			second->next = fourth;
			if (fourth)
				fourth->prev = second;
			third->next = second;
			third->prev = first;
			if (first)
				first->next = third;
			else
				*list = third;
			second->prev = third;
			current = *list;
			print_list(*list);
			continue;
		}
		else
			current = current->next;
	}
}


/**
 * len_list - returns length of list
 * @i: pointer
 *
 * Return: lists len
 */
int len_list(listint_t *i)
{
	int len = 0;

	while (i)
	{
		len++;
		i = i->next;
	}
	return (len);
}
