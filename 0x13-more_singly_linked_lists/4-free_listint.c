#include "lists.h"

/**
 * free_listint - frees a linked list in listint_t list
 * @head: a header to listint_t list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
