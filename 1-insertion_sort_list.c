#include "sort.h"

/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 * @list: Double pointer to the head of the list
 * @a: First node
 * @b: Second node (should be a->next)
 */
void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
	if (!a || !b || !list || a->next != b)
		return;

	a->next = b->next;
	if (b->next)
		b->next->prev = a;

	b->prev = a->prev;
	b->next = a;
	a->prev = b;

	if (b->prev)
		b->prev->next = b;
	else
		*list = b;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using the insertion sort algorithm
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		prev = current->prev;
		while (prev && prev->n > current->n)
		{
			swap_nodes(list, prev, current);
			print_list(*list);
			prev = current->prev;
		}
		current = current->next;
	}
}
