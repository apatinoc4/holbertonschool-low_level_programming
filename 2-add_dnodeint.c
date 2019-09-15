#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: double pointer
 * @n: value of the new node
 *
 * Return: pointer or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;
	if (node->next != NULL)
		(node->next)->prev = node;
	return (node);
}
