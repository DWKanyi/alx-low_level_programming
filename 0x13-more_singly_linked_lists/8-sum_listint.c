#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list
 *
 * @head: pointer to the head of node
 *
 * Return: sum of all the data in list,
 * or 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *nd = head;
	int sum = 0;

	for (; nd != NULL; nd = nd->next)

		sum += nd->n;

	return (sum);
}
