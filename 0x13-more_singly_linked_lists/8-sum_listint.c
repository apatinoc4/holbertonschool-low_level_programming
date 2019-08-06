#include "lists.h"
#include <stdlib.h>
/**
  *sum_listint - programs things
  *Result: always returns 0
  *@head : variable
  *Return: 0 sucess
  */
int sum_listint(listint_t *head)
{
int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
