#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - function for insertion sort
 *
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *fg;

	if (!list)
		return;
	fg = *list;

	while (fg)
	{
		while (fg->next && (fg->n > fg->next->n))
		{
			temp = fg->next;
			fg->next = temp->next;
			temp->prev = fg->prev;

			if (fg->prev)
			{
				fg->prev->next = temp;
			}
			if (temp->next)
			{
				temp->next->prev = fg;
			}
			fg->prev = temp;
			temp->next = fg;
			if (temp->prev)
				fg = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		fg = fg->next;
	}
}
