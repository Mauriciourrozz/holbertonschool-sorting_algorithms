#include "sort.h"
#include <stdio.h>
/**
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list

	current = current->next;

	while (current != NULL)
	{
		if (current->next != NULL && current->n > current->prev->n)/*pregunto si el siguiente no es null para evitar segmentation fault*/
		{
			(*list)->next = current->next->prev;
			(*list)->prev = current;
			current->prev = (*list);
			(*list)->next->prev = (*list);
			current->prev = NULL;
			print_list(*list);
		}
		current = current->next;/*para avanzar en el while*/
	}
}
