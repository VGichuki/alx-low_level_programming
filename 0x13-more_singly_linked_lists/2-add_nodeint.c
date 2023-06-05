#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: a pointer to the first node of listint_t list
 * @n: integer of listint_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
