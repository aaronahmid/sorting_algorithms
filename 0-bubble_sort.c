#include "sort.h"
/**
 * bubble_sort - implements the bubble sort algorithm
 *
 * @array: unsorted array
 * @size: size of array in [int]
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;
	int swapped; /* 1 -> true, 0 -> false */

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}

		if (swapped == 0)
			break;
	}
}
