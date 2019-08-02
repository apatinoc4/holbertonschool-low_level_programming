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
	list_t *lista, *next;

	lista = head;
	while (lista != NULL)
	{
		next = lista->next;
		free(lista->str);
		free(lista);
		lista = next;
	}

}
