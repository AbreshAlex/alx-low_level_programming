#include "lists.h"

/**
 * add_nodeint_end - add new node at end of list
 * @head: pointer to list
 * @n: data for new node
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tracker = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}

	while (tracker->next)
	tracker = tracker->next;

	tracker->next = newnode;

	return (newnode);
}
