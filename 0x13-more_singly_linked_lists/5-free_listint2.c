#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * and sets the head node to NULL
 *
 * @head: pointer to the head node of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *nd;
	listint_t *tmp;

	if (head == NULL)
		return;

	nd = *head;

	while (nd != NULL)
	{
		tmp = nd;
		nd = nd->next;
		free(tmp);
	}

	*head = NULL;
}
