#include "lists.h"

/**
 * insert_node - inserts a node to a sorted linked list
 * @head: head of the linked list
 * @number: the number to be inserted.
 * Return: the address of the new node or NULL if it failed.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *prev_node, *new_node;

	prev_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = number;
	if (*head == NULL || (*head)->n > number)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (prev_node->next != NULL)
	{
		if ((prev_node->next)->n >= number)
		{
			new_node->next = prev_node->next;
			prev_node->next = new_node;
			return (new_node);
		}
		prev_node = prev_node->next;
	}
	prev_node->next = new_node;
	new_node->next = NULL;
	return (new_node);
}
