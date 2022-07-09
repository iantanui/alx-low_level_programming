#include "lists.h"

/**
 * sum_dlistint - sums all the data in a dlistint_t list
 * @head: head node
 * Return: sum (int) of all values in all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	unsigned int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
