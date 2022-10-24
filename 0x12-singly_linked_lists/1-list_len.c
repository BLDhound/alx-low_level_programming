#include "lists.h"
/**
 * list_len - function that returns number of elements in a linked list_t
 * @h: first parameter
 * Return: size of singly linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	if(h == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 1; h->next != NULL; i++)
		{
			h = h->next;
		}
		return (i);
	}
}
