#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head of DLL
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *head_next;

	while (head)
	{
		head_next = head->next;
		free(head);
		head = head_next;
	}
}
