#include "lists.h"

/**
 * print_list - function that prints
 * all the elements of a list_t list
 *
 * @h: Pointer to head of linked list list_t
 *
 * Return: Number of nds
 */

size_t print_list(const list_t *h)
{
	const list_t *nd = h;
	size_t sz = 0;

	while (nd != NULL)
	{
		if (nd->str != NULL)
			printf("[%d] %s\n", nd->len, nd->str);

		else
			printf("[0] (nil)\n");

		nd = nd->next;
		sz++;
	}

	return (sz);
}
