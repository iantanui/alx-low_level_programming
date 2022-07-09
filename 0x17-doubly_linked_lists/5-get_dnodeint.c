#include "lists.h"

/**
 * dlistint_len - returns length of linked list
 * @h: doubly linked list
 * Return: number of elements present
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

/**
 * get_dnodeint_at_index - get nth node of a dlistint_t linked list
 * @head: head node
 * @index: index of the node starting from 0
 * Return: specified node, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int count = 0;

	if (index >= dlistint_len(head))
		return (NULL);

	else
	{
		for (count = 0; count < index; count++)
			h = h->next;
	}

	return (h);
}
