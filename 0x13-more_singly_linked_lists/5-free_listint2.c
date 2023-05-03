#include "lists.h"

/**
 * free_listint2 - a function to free a list and set the  head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
			current = *head;

		/*iterate through the whole list*/
		while ((temp = current) != NULL)
		{
			current = current->next;
			/*free temp, that is the current node*/
			free(temp);
		}

		*head = NULL;
	}
}
