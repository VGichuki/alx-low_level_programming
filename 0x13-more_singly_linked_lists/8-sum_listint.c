#include "lists.h"

/**
 * sum_listint - calculates the sum of data in listint_t file
 * @head: first node in listint_t list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
