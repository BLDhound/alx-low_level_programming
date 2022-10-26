#include "lists.h"
/**
 * pop_listint - function that deletes the head node of linked list
 * @head: pointer to first element
 * Return: data inside elements
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
