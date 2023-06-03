#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list
 *
 * @head: pointer to the head of the linked list
 * @str: string to be duplicated and added as a new node
 * at the tail of the list
 *
 * Return: address of the new node
 * else NULL for failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (str == NULL || new == NULL)
	return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		list_t *nd = *head;

		while (nd->next != NULL)
			nd = nd->next;

		nd->next = new;
	}

	return (new);
}
