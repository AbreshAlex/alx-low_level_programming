#include "lists.h"

/**
 * listint_len - return num of elements in linked list
 * @h: pointer to list to print
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}

	return (s);
}
