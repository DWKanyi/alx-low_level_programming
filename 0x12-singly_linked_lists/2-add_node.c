#include "lists.h"

/**
 * add_node -  function that adds a new node
 * at the beginning of a list_t list
 *
 * @head: pointer to the head of the linked list list_t
 * @str: duplicated string to be added to a new node
 *
 * Return: address of the new node,
 * else NULL if it has failed
 */

list_t *add_node(list_t **head, const char *str)
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
	new->next = *head;
	*head = new;

	return (new);
}
