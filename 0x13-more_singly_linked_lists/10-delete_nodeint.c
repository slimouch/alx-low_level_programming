#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @index: integer
 * @head: list of elements
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *Node, *Pnode;
	unsigned int a;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		Node = *head;
		*head = (*head)->next;
		free(Node);
		return (1);
	}
	Node = *head;
	for (a = 0 ; Node; a++, Pnode = Node, Node = Node->next)
	{
		if (a == index)
		{
			Pnode->next = Node->next;
			free(Node);
			return (1);
		}
	}
	return (-1);
}
