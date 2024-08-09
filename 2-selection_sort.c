#include "sort.h"
/**
 * swap - Intercambia los numeros
 * @a: numero
 * @b: numero
 * Return: Void
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - Ordena una lista usando la selection sort
 * @array: Lista de numeros
 * @size: tamaño de la lista
 */
void selection_sort(int *array, size_t size)
{
	size_t pass;
	size_t minor;
	size_t i;

	for (pass = 0; pass < size - 1; pass++)
	{
		minor = pass;
		for (i = pass + 1; i < size; i++)
		{
			if (array[i] < array[minor])
			{
				minor = i;
			}
		}
		if (minor != pass)
		{
			swap(&array[pass], &array[minor]);
			print_array(array, size);
		}
	}
}
