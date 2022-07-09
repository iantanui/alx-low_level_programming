#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the doubly linked list
 * @head: head node of specific doubly linked list
 * @n: value for the new node
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head, *p;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}

	else
	{
		if (h->next == NULL)
			node->prev = h;

		else
		{
			while (h->next)
			{
				p = h;
				h = h->next;
				h->prev = p;
			}

			node->prev = h;
		}
		h->next = node;
	}

	return (node);
	free(node);
}
