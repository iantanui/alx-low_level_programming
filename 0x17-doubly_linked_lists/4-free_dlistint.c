#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	dlistint_t *temp;

	if (h == NULL)
		return;

	while (h->next)
	{
		temp = h->next;
		free(h);
		h = temp;
	}

	free(h);
}
