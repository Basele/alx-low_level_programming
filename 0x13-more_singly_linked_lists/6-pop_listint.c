#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: data of the head node (n)
*/
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	/*set head addr to temp*/
	temp = *head;
	/*get addr of next node*/
	next = temp->next;
	/*get element of first node*/
	first_node = temp->n;

	/*free first node*/
	free(temp);

	*head = next;
	
	return (first_node);
}
