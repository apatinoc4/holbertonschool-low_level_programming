#include "lists.h"
#include <stdio.h>
/**
  *listint_len - programs things
  *Result: always returns 0
  *@h : variable
  *Return: 0 sucess
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}

