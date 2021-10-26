#include "sort.h"

/**
 * swap - swaps two integers adjacent of each other in an array
 *
 * @x: pointer integer to the left
 * @y: pointer integer to the right
 */

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
