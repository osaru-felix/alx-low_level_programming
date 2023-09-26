#include "lists.h"
/**
 * free_listd - function frees a linked list
 * @head: head of the list
 * Return: No return
 */

void free_listd(listd_t **head)
{
	listd_t *tmp;
	listd_t *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((tmp = cur) != NULL)
		{
			cur = cur->next;
			free(tmp);
		}
		*head = NULL;
	}
}



/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listg_t *hptr, *name, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listg_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listg(&hptr);
				return (nnodes);

			}
		}
		printf("[%p] %d/n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listg(&hptr);
	return (nnodes);
}
