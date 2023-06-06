#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node a
 * index index of a listint_t linked list
 *
 * @head: pointer to head node of a list
 * @index: index of the node to be deleted
 * index starts at 0
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *nd;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	nd = *head;

	for (i = 0; i < index - 1 && nd != NULL; i++)
		nd = nd->next;

	if (nd == NULL || nd->next == NULL)
		return (-1);

	tmp = nd->next;
	nd->next = tmp->next;
	free(tmp);

	return (1);
}

