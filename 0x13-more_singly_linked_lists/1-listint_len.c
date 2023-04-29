#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 *
 * @head: head pointer
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
	head = head->next;
		node_count++;
	}
	return (node_count);
}
