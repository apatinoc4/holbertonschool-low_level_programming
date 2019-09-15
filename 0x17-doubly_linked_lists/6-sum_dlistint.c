#include "lists.h"

/**
 * sum_dlistint - sums all data of a list
 * @head: pointer
 *
 * Return: add
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
