#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: list of elements
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *New;

	while (head)
	{
		New = head;
		head = head->next;
		free(New);
	}
}
