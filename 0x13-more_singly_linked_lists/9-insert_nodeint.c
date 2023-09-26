#include "lists.h"

/**
 * _new_node - function creates new node
 * @n: data of node
 * Return: pointer
 */
listint_t *_new_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	return (new);
}

/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * @head: pointer to first element of list
 * @idx: index to the position of new node
 * @n: data of new node
 * Return: address of the newly created node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *old_tmp;
	listint_t *new;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new = _new_node(n);
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	if (idx == 0)
		*head = new;
	for (i = 0; i < idx - 1 && tmp != NULL && idx != 0 i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new->next = tmp;
	else
	{
		old_tmp = tmp->next;
		tmp->next = new;
		new->next = old_tmp;
	}
	return (new);
}
