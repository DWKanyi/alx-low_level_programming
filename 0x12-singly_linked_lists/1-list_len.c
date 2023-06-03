#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 *
 * @h: Pointer to the head of the linked list
 *
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *nd = h;
	size_t sz = 0;

	while (nd != NULL)
	{
		sz++;
		nd = nd->next;
	}

	return (sz);
}
