#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - function for quick sort.
 *
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	pos(array, 0, size - 1, size);
}
/**
 * pos - another quick_sort function
 *
 * @a: arrray
 * @lb: lower boundry
 * @ub: upper boundry
 * @size: size of array
 */
void pos(int *a, int lb, int ub, int size)
{
	int h, l, i;
	int temp;

	if (lb < ub)
	{
		h = ub;
		l = lb;
		for (i = lb; i < ub; i++)
		{
			if (a[i] < a[h])
			{
				if (i != l)
				{
					temp = a[i];
					a[i] = a[l];
					a[l] = temp;
					print_array(a, size);
				}
				l++;
			}
		}
		if (l != h && a[l] != a[h])
		{
			temp = a[l];
			a[l] = a[h];
			a[h] = temp;
			print_array(a, size);
		}
		pos(a, lb, l - 1, size);
		pos(a, l + 1, ub, size);
	}
}
