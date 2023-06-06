#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements
 * in a linked listint_t list.
 * @h: a list of elements
 * Return: number of elemets
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
		h = h->next;
	return (a);
}
