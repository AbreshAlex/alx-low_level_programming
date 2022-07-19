#include "lists.h"

/**
 * add_nodeint - add new node at beginning of list
 * @head: pointer to list
 * @n: data for new node
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (*head);
}
