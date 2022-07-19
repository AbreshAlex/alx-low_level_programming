#include "lists.h"

/**
 * sum_listint - sums all data (n) of linked list
 * @head: first node in the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tracker = head;

	while (tracker)
	{
		sum += tracker->n;
		tracker = tracker->next;
	}

	return (sum);
}
