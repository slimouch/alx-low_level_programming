#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: list of elements
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *Node, *Next;

	Node = NULL;
	Next = NULL;
	if (!head || !*head)
		return (NULL);
	Node = *head;
	*head = NULL;
	while (Node)
	{
		Next = Node->next;
		Node->next = *head;
		*head = Node;
		Node = Next;
	}
	return (*head);
}
