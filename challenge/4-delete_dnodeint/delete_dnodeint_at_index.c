#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: head of linked list
 * @index: index of node to delete (0 = head)
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
