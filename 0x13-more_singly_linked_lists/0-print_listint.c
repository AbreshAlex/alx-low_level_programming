#include "lists.h"
#include <stdio.h>


/**
 * print_listint - prints elements of linked list
 * @h: pointer to list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}


	return (s);
}
