#include "lists.h"
/**
 * get_nodeint_at_index -function that returns the node at a certain indexin linked list
 * @head: first node in linked list
 * @index: index of node
 * Return: pointer to node 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unisgned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}

	return (temp ? temp : NULL);
}
