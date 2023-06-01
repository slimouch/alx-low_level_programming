#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
