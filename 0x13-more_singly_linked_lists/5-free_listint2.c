#include "lists.h"
#include <stdlib.h>
/**
  *free_listint2 - programs things
  *Result: always returns 0
  *@head : variable
  *Return: 0 sucess
  */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
	*head = next;
	}
}
