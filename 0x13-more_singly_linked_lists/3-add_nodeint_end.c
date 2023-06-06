#include "lists.h"

/**
 * add_nodeint_end - function that adds a new
 * node at the end of a listint_t list
 *
 * @head: pointer to the head of list
 * @n: value to be added
 *
 * Return: address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nd_new = malloc(sizeof(listint_t));
	listint_t *nd;

	if (nd_new == NULL)
		return (NULL);

	nd_new->n = n;
	nd_new->next = NULL;

	if (*head == NULL)
		*head = nd_new;

	else
	{
		nd = *head;

		while (nd->next != NULL)
			nd = nd->next;

		nd->next = nd_new;
	}

	return (nd_new);
}
