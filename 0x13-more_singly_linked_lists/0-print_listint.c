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
	const listint_t *tracker = h;

	while (tracker)
	{
		printf("%d\n", tracker->n);
		tracker = tracker->next;
		s++;
	}


	return (s);
}
