#include "lists.h"

/**
 * pop_listint - function that deletes the head
 * node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: pointer to the head of list
 *
 * Return: head node's data n,
 * or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *nd;
	int val;

	if (head == NULL || *head == NULL)
		return (0);

	nd = *head;
	val = nd->n;
	*head = (*head)->next;
	free(nd);

	return (val);
}
