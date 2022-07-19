#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *tracker;

	if (head == NULL)
	return;

	while (*head)
	{
		tracker = (*head)->next;
		free(*head);
		*head = tracker;
	}

	*head = NULL;
}
