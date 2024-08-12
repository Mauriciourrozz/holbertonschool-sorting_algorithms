#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - list
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL)
	{
		return;
	}
	listint_t *current = (*list)->next;
	listint_t *siguiente_a_current = current->next;
	listint_t *anterior_a_current = current->prev;

	while (current != NULL)
	{
		while (anterior_a_current != NULL && anterior_a_current->n > current->n)
		{
			anterior_a_current = anterior_a_current->prev;
		}
		if (anterior_a_current != current->prev)
		{
			if (current->prev != NULL)
			{
				current->prev->next = current->next;
			}
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			if (anterior_a_current == NULL)
			{
				current->prev = NULL;
				current->next = *list;
				(*list)->prev = current;
				*list = current;
			}
			else
			{
				current->prev = anterior_a_current;
				current->next = anterior_a_current->next;
				if (anterior_a_current->next != NULL)
				{
					anterior_a_current->next->prev = current;
					anterior_a_current->next = current;
				}
				print_list(*list);
			}
			current = siguiente_a_current;
		}
}
