#include "lists.h"

/**
 * free_listint2 - frees a linked list in listint_t list
 * @head: pointer to listint_t list
 *
 * Description: sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;

	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}

	head = NULL;
}
