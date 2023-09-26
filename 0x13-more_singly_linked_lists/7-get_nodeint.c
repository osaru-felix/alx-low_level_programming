#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer
 * @index: node position
 * Return: pointer to the node returned
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a_node;

	for (a_node = 0; a_node < index; a_node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
