#include <stddef.h>
#include "sort.h"

/**
 * bubble_sort - function does bubble sort
 *
 * @array: input array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	int temp, flag;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
