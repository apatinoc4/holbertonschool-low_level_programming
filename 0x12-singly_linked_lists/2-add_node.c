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
st_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
