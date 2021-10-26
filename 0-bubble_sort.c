#include <stddef.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using Bubble sort algorithm
 * @array: array of integers to be sorted
 * @size: length of array
 */
void bubble_sort(int *array, size_t size)
{
	int flag, temp = 0;
	size_t i, j;

	if (!array || size < 2)
		return;
	for(i = 0; i < size; i++)
	{
		flag = 0;
          	for(j = 0; j <= size - 2; j++)
		{
			if(array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag++;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
