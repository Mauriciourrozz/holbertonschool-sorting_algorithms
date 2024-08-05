#include "sort.h"
/**
 * bubble_sort - ordena una matriz usando ordenamiento de burbujas
 * @array: martiz de numeros desordenados
 * @size: tamaño de la matriz
 */
void bubble_sort(int *array, size_t size)
{
	int t;
	size_t pass;
	size_t i;

	print_array(array, size);

	for (pass = 0; pass < size - 1; pass++)
	{
		print_array(array, size);

		for (i = 0; i < size - 1 - pass; i++)
		{
			if (array[i] > array[i + 1])
			{
				t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
			}
		}

		print_array(array, size);
	}
}
