#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list
 *
 * @head: pointer to the head node of the list
 * @index: returned node index starting at 0
 *
 * Return: index of the nth node,
 * NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nd = head;
	unsigned int cnt = 0;

	for (; nd != NULL; cnt++, nd = nd->next)
	{
		if (cnt == index)
			return (nd);
	}

	return (NULL);
}
