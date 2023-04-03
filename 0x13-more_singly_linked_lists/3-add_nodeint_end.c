#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Entry point
 *
 * Description: Write a function that adds a new node at the end of a list.
 *
 * @head: pointer to the first element in the list.
 * @n: int add the list
 *
 * Return: NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node;
	}

	return (new_node);
}
