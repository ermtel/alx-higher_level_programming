#include "lists.h"

/**
 * check_cycle - checks if a linked list has a cycle.
 * @list: the head of the linked list.
 * Return: 0 if there is no cycle and 1 if there is.
 */
int check_cycle(listint_t *list)
{
	listint_t *temp;

	if (!list)
		return (0);

	temp = list -> next;
	while(temp && list && temp -> next)
	{
		if(temp == list)
			return (1);
		temp = temp -> next -> next;
		list = list -> next;
	}
	return (0);
}
