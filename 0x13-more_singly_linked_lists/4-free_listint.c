#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: pointer to the head of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *nd;

	while (head != NULL)
	{
		nd = head;
		head = head->next;
		free(nd);
	}
}
