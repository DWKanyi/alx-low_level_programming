#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a nd_new node at a given position
 *
 * @head: pointer to the head node of the list
 * @idx: position at which nd_new node is to be added
 * and starts at 0
 * @n: nd_new node data
 *
 * Return: address of nd_new node, NULL if it failed
 * if not possible to add nd_new node, do not add and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nd_new;
	listint_t *tmp = *head;

	nd_new = malloc(sizeof(listint_t));
	if (nd_new == NULL || head == NULL)
		return (NULL);

	nd_new->n = n;
	nd_new->next = NULL;

	if (idx == 0)
	{
		nd_new->next = *head;
		*head = nd_new;
		return (nd_new);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nd_new->next = tmp->next;
			tmp->next = nd_new;
			return (nd_new);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
