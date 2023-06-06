#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: list of elements
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer
 * Return: the address of the new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *Node, *Nnode;
	unsigned int a = 0;

	*Nnode = malloc(sizeof(listint_t));
	if (!Nnode || !head)
		return (NULL);
	Nnode->n = n;
	Nnode->next = NULL;
	if (!idx)
	{
		Nnode->next = *head;
		*head = Nnode;
		return (Nnode);
	}
	Node = *head;
	while (Node)
	{
		if (a == idx - 1)
		{
			Nnode->next = Node->next;
			Node->next = Nnode;
			return (Nnode);
		}
		a++;
		Node = Node->next;
	}
	free(Nnode);
	return (NULL);
}
