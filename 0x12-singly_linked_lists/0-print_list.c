#include "list.h"
/**
 * print_list - a function that prints all the elements of a linked list
 * @h: Pointer to a linked list
 * Return: number of total nodes in linked list
 */
size_t print_list(const list_t *h)
{
	int n;

	if (h == NULL)
		return (0);
	for (n = 1; h->next != NULL; n++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (n);
}
