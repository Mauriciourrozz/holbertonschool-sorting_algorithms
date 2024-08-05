#include "sort.h"
/**
 * bubble_sort - ordena una matriz usando ordenamiento de burbujas
 * @array: martiz de numeros desordenados
 * @size: tamaño de la matriz
 */
void bubble_sort(int *array, size_t size)
{
	int t; /*variable que se usa para intercambiar dos elementos del array*/
	size_t pass; /*variable para pasar por el array*/
	size_t i;

	for (pass = 0; pass < size - 1; pass++) /**/
	{
		print_array(array, size); /*imprime la actualizacion*/
						/*del array luego de cada pasada*/

		for (i = 0; i < size - 1 - pass; i++)
		{
			if (array[i] > array[i + 1])
			{
				t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
			}
		}
	}
}
