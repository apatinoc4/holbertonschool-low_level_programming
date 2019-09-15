#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node
 * @head: double pointer
 * @n: value of  new node
 *
 * Return: node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		{
		return (NULL);
		}
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		{
		return (NULL);
		}
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;
	if (node->next != NULL)
		(node->next)->prev = node;
	return (node);
}
