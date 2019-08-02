#include "lists.h"
#include <stdlib.h>
/**
  *free_list - programs things
  *Result: always returns 0
  *@head : variable
  *Return: 0 sucess
  */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}

}
