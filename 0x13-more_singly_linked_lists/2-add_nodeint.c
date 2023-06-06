#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list
 *
 * @head: pointer to the head of list
 * @n: value to be added
 *
 * Return: address of the new element,
 * NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nd_new = malloc(sizeof(listint_t));

	if (nd_new == NULL)
		return (NULL);

	nd_new->n = n;
	nd_new->next = *head;
	*head = nd_new;

	return (nd_new);
}
