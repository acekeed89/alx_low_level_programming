#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Entry point
 *
 * Description: Write a function that frees a listint_t list.
 *
 * @head: double pointer of lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->temp;
		free(*temp);
	}

	*head = NULL;
}
