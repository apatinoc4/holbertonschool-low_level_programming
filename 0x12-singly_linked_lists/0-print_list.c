#include "lists.h"
#include <stdio.h>
/**
  *print_list - programs things
  *Result: always returns 0
  *@h : variable
  *Return: 0 sucess
  */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
