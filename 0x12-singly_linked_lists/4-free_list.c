#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: pointer to the head of the linked list list_t
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *nd = head;
	list_t *next;

	while (nd != NULL)
	{
		next = nd->next;
		free(nd->str);
		free(nd);
		nd = next;
	}
}
