#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of
 * a listint_t linked list.
 * @head: list of elements
 * @index: the index of the node, starting at 0
 * Return: the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *Nnode;
	unsigned int a;

	Nnode = head;
	a = 0;
	while (Nnode && a < index)
	{
		Nnode = Nnode->next;
		a++;
	}
	return (Nnode);
}
