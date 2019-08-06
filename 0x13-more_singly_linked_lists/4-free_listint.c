#include "lists.h"
#include <stdlib.h>
/**
  *free_listint - programs things
  *Result: always returns 0
  *@head : variable
  *Return: 0 sucess
  */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
