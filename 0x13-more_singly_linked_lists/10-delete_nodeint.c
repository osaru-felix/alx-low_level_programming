#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a
 * linked list
 * @head: pointer
 * @index: index of node to be deleted
 * Return: 1 if successful and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *free_node;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && tmp != NULL && index != 0; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		free_node = tmp->next;
		free(tmp);
		*head = free_node;
	}
	else
	{
		if (tmp->next == NULL)
			free_node = tmp->next;
		else
			free_node = tmp->next->next;
		free(tmp->next);
		tmp->next = free_node;
	}
	return (1);
}
