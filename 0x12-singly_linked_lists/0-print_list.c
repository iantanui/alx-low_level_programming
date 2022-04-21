#include "lists.h"

/**
 * print_list - prints linked list
 * @h: list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i, n = 0, count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
		return;
	}

	for (i = 0; h->next; i++)
	{
		count++;
	}
	return (count);
}
