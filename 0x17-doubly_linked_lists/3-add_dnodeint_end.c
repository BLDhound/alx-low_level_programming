#include "lists.h"

/**
 * add_dnodeint_end - add node at end of linked list
 * @head: pointer to first node of double linked list
 * @n: value of new_node
 * Return: EXIT_SUCCESS
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	/* initialize the new_node */
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (last_node->next)
		last_node = last_node->next;
	new_node->prev = last_node;
	/* reset the next of the last_node */
	last_node->next = new_node;
	return (new_node);
}
