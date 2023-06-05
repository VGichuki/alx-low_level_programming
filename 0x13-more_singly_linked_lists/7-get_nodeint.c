#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linkint_t list
 * @head: first node in linkint_t list
 * @index: index of listont_t list
 *
 * Return: pointer or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
