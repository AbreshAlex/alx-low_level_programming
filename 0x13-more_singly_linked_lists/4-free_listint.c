#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to list
 */
void free_listint(listint_t *head)
{
	listint_t *tracker;

	while (head != NULL)
	{
		tracker = head;
		head = head->next;
		free(tracker);
	}
}
