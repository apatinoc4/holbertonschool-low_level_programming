#include "lists.h"
#include <stdlib.h>
/**
  *add_nodeint - programs things
  *Result: always returns 0
  *@head : variable
  *@n : variable
  *Return: 0 sucess
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
