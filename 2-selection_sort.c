#include "sort.h"

/**
 * selection_sort - implements the selection sort algorithm
 *
 * @array: unsorted array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, l_num;
	int tmp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		l_num = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[l_num])
				l_num = j;

		tmp = array[l_num];
		array[l_num] = array[i];
		array[i] = tmp;
		print_array(array, size);
	}
}
