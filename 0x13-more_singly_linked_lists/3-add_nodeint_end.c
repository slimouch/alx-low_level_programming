#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list.
 * @head: list of elements
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Nnode = malloc(sizeof(listint_t));
	listint_t *tmp;

	if (!Nnode || !head)
		return (NULL);
	Nnode->n = n;
	if (!*head)
		*head = Nnode;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = Nnode;
	}
	return (Nnode);
}
