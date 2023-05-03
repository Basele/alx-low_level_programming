#include "lists.h"

/**
 * free_listint 
 *
 * @head: pointer to the first node of the list
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
