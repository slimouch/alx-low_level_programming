#include "lists.h"
/**
 * sum_listint - the sum of all the data (n) of
 * a listint_t linked list.
 * @head: list of elements
 * Return: sum of all the data else 0
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head =  head->next;
	}
	return (s);
}
