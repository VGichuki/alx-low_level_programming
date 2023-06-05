#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t list
 * @head: pointer to listint_t list
 *
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (num);
}
