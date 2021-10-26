#include "sort.h"
/**
 * bubble_sort - implements the bubble sort algorithm
 *
 * @array: unsorted array
 * @n: size of array in [int]
 * Return: None
 */
void bubble_sort(int *array, size_t n)
{
	size_t i, j;
	int swapped; /* 1 -> true, 0 -> false */

	if (n < 2)
		return;

	for (i = 0; i < (n - 1); i++)
	{
		swapped = 0;
		for (j = 0; j < (n - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
			}
			print_array(array, n);
		}

		if (swapped == 0)
			break;
	}
}
