#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
    size_t count = 1;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return (count);
}


// size_t list_len(const list_t *h)
// {
// 	size_t node_count = 1;
// 	if (h == NULL)
// 		return (0);
// 	while (h->next != NULL)
// 	{
// 		h = h->next;
// 		node_count++;
// 	}

// 	return (node_count);
// }