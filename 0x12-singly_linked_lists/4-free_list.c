#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the list
 **/

void free_list(list_t *head)
{
	list_t *nodes;
	list_t *next_node;

	if (head)
	{
		nodes = head;
		next_node = head->next;
		while (next_node)
		{
			free(nodes->str);
			free(nodes);
			nodes = next_node;
			next_node = next_node->next;
		}
		free(nodes->str);
		free(nodes);
	}
}
