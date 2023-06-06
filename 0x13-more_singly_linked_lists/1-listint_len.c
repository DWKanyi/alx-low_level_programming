#include "lists.h"

/**
 * listint_len - function that returns the
 * number of elements in a linked listint_t list
 *
 * @h: pointer to the head of list
 *
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *nd = h;
	size_t num = 0;

	while (nd != NULL)
	{
		num++;
		nd = nd->next;
	}

	return (num);
}
