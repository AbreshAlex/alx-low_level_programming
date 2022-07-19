#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 * @head: pointer to linked list
 * Return: data of node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
