#include "lists.h"
#include <stdio.h>
/**
  *_strlen - programs things
  *Result: always returns 0
  *@str : variable
  *Return: 0 sucess
  */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
	;
	return (i);

/**
  *add_node - programs things
  *Result: always returns 0
  *@str : variable
  *@head : list
  *Return: 0 sucess
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *lista;

	if (str == NULL)
		return (NULL);
	lista = malloc(sizeof(list_t));
		if (lista == NULL)
		return (NULL);
	lista->str = strdup(str);
	if (lista->str == NULL)
	{
		free(lista);
		return (NULL);
	}
	lista->len = _strlen(lista->str);
	lista->next = *head;
	*head = lista;
	return (lista);
}
