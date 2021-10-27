#include <stddef.h>
#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to convert to sort
 * @size: length of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, ir;
	int temp;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		ir = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[ir] > array[j])
				ir = j;
		}
		if (ir != i)
		{
			temp = array[i];
			array[i] = array[ir];
			array[ir] = temp;
			print_array(array, size);
		}
	}
}
