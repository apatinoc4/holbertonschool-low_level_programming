#include "lists.h"
#include <stdio.h>
/**
  *list_len - programs things
  *Result: always returns 0
  *@h : variable
  *Return: 0 sucess
  */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	tmp = tmp->next;
	return (i);
}
