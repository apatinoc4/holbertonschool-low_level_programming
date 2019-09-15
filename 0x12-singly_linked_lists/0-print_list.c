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
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		count++;
	}
	return (count);
}
