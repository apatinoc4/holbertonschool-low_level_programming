#include "lists.h"
#include <stdlib.h>
/**
  *pop_listint - programs things
  *Result: always returns 0
  *@head : variable
  *Return: 0 sucess
  */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
