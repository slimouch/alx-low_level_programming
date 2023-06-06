#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @head: list of elements
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Nnode =  malloc(sizeof(listint_t));

	if (!Nnode || !head)
		return (NULL);
	Nnode->n = n;
	if (*head)
		Nnode->next = *head;
	*head = Nnode;
	return (Nnode);
}
