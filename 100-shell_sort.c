#include <stdio.h>
#include <stddef.h>
#include "sort.h"

/**
 * shell_sort - shell sort function
 *
 * @array: array
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t incr, i;
	int j, k;

	incr = 1;
	while (incr <= (size - 1) / 9)
		incr = 3 * incr + 1;

	while (incr >= 1)
	{
		for (i = incr; i < size; i++)
		{
			k = array[i];
			for (j = i - incr; j >= 0 && k < array[j]; j = j - incr)
				array[j + incr] = array[j];
			array[j + incr] = k;
		}
		incr = incr / 3;
	}
	print_array(array, size);
}
