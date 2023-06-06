#include "lists.h"

/**
 * print_listint - function that prints all
 * elements of a listint_t list
 *
 * @h: pointer to the head node of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *nd = h;
	size_t num = 0;

	while (nd != NULL)
	{
		printf("%d\n", nd->n);
		nd = nd->next;
		num++;
	}

	return (num);
}
