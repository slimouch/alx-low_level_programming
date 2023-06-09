#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: list of elements
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *Nnode, *tmp;

	if (!head)
		return;
	Nnode = *head;
	while (Nnode)
	{
		tmp = Nnode;
		Nnode = Nnode->next;
		free(tmp);
	}
	*head = NULL;
}
