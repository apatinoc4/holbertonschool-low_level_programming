#include "lists.h"
#include <stdlib.h>
/**
  *get_nodeint_at_index - programs things
  *Result: always returns 0
  *@head : variable
  *@index : variable
  *Return: 0 sucess
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
	{
		return (NULL);
	}
	}
	return (head);
}
