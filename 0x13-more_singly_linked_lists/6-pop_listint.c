#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t
 * linked list.
 * @head: list of elements
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *Nnode;
	int a;

	if (!head || !*head)
		return (0);
	Nnode = (*head)->next;
	a = (*head)->n;
	free(*head);
	*head = Nnode;
	return (a);
}
